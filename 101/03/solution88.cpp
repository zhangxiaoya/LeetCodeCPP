#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) {
            return;
        }
        int pos = m + n -1;
        --m;
        --n;
        while(m >= 0 && n >=0) {
            if (nums1[m] > nums2[n]) {
                nums1[pos] = nums1[m];
                --m;
            } else {
                nums1[pos] = nums2[n];
                --n;
            }
            --pos;
        }

        while(n >=0) {
            nums1[pos] = nums2[n];
            --n;
            --pos;
        }
        while(m >=0) {
            nums1[pos] = nums1[m];
            --m;
            --pos;
        }
    }
};

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    Solution solution;
    solution.merge(nums1, 3, nums2,3);
    for(auto i: nums1){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}