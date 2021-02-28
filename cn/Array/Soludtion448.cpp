#ifndef LEETCODECLION_SOLUTION448_H_
#define LEETCODECLION_SOLUTION448_H_

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::vector<int> result;
        for(auto i = 0; i < nums.size(); ++i) {
            auto index = (nums[i] - 1) % nums.size();
            nums[index] += nums.size();
        }
        for(auto i = 0; i< nums.size(); ++i) {
            if(nums[i] <= nums.size()) {
                result.push_back(i+1);
            }
        }
        return result;  
    }
};

int main() {
    std::vector<int> test_input = {4,3,2,7,8,2,3,1};

    Solution solution;
    std::vector<int> res = solution.findDisappearedNumbers(test_input);
    for(auto i =0;i  < res.size(); ++i ) {
        std::cout << res[i] << " ";
    }
}

#endif // LEETCODECLION_SOLUTION448_H_
