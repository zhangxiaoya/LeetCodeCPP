#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        if (ratings.size() < 2) {
            return ratings.size();
        }
        vector<int> candy_num(ratings.size() , 1);
        for(int i =1; i< ratings.size(); ++i) {
            if (ratings[i] > ratings[i-1]) {
                candy_num[i] = candy_num[i - 1] + 1;
            }
        }
        for(int i = ratings.size() -1; i > 0; --i) {
            if(ratings[i-1] > ratings[i] && candy_num[i] >= candy_num[i - 1]) {
                candy_num[i-1] = candy_num[i] + 1;
            }
        }
        return accumulate(candy_num.begin(), candy_num.end(), 0);
    }
};

int main() {
    vector<int> ratings = {1,0,2};
    Solution solution;
    cout << solution.candy(ratings);
}