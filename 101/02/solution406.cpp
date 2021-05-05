#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](vector<int>& a, vector<int>& b){
            return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
        });

        vector<vector<int>> res;
        for (int i =0; i< people.size(); ++i) {
            if(res.size() <= people[i][1]){
                res.push_back(people[i]);
            } else {
                res.insert(res.begin() + people[i][1], people[i]);
            }
        }
        return res;
    }
};

int main() {
    vector<vector<int>> nums = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    Solution solution;
    vector<vector<int>> res = solution.reconstructQueue(nums);
    for(auto i : res) {
        cout << i[0] << " " << i[1] << endl;
    }
    return 0;
}