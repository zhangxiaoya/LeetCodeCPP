#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });

        int result = 1;
        int pre = points[0][1];
        for(int i = 1; i< points.size(); ++ i) {
            if (points[i][0] <= pre) {
                continue;
            } else {
                pre = points[i][1];
                ++result;
            }
        }
        return result;
    }
};

int main() {
    vector<vector<int>> nums = {{1,2},{3,4},{5,6},{7,8}};
    Solution solution;
    cout << solution.findMinArrowShots(nums);
    return 0;
}