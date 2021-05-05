#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() -1;
        while(start < end) {
            if(numbers[start] + numbers[end] < target) {
                ++start;
            } else if(numbers[start] + numbers[end] > target) {
                --end;
            } else {
                break;
            }
        }
        return vector<int>({start+1, end+1});
    }
};

int main() {
    vector<int> nums = {2,7,11,15};
    Solution solution;
    vector<int> res = solution.twoSum(nums, 9);
    cout << res[0] << " " << res[1];
    return 0;
}