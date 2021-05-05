#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() < 2) {
            return true;
        }
        int count = 0;
        for (int i =1;i < nums.size(); ++ i) {
            if (nums[i-1] <= nums[i]) {
                continue;
            }
            count ++;
            if(i-2 >= 0 && nums[i-2] > nums[i]) {
                nums[i] = nums[i-1];
            } else {
                nums[i - 1] = nums[i];
            }
            for(auto c: nums) {
                cout << c << " ";
            }
            cout << endl;
        }
        return count <= 1;
    }
};

int main() {
    vector<int> nums = {3, 4,2,3};
    Solution solution;
    cout << solution.checkPossibility(nums);

    return 0;
}