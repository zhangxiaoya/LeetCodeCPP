#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return 0;
        }
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        int total = 0;
        int pre = intervals[0][1];
        for(int i = 1; i< intervals.size(); ++i) {
            if(intervals[i][0] < pre) {
                ++ total;
            }
            else {
                pre =  intervals[i][1];
            }
        }
        return total;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> intervals= {{1,2}, {1,3}, {2,4}};
    cout << solution.eraseOverlapIntervals(intervals);
    return 0;
}