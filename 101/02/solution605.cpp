#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.insert(flowerbed.end(), 0);

        for(int i = 1; i < flowerbed.size() -1; ++i) {
            if (flowerbed[i] == 1) {
                continue;
            }
            if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                flowerbed[i] = 1;
                --n;
            }
        }
        return n <= 0;
    }
};


int main() {
    Solution solution;
    vector<int> nums = {1,0,0,0,1};
    cout << solution.canPlaceFlowers(nums, 2) << endl;
    return 0;
}