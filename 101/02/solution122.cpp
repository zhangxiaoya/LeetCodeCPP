#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        for (int i =1; i< prices.size(); ++i) {
            if (prices[i] - prices[i-1] > 0) {
                result += (prices[i] - prices[i-1]);
            }
        }
        return result;
    }
};


int main () {
    vector<int> prices = {7,1,5,3,6,4};
    Solution solution;
    cout << solution.maxProfit(prices) << endl;
    return 0;
}