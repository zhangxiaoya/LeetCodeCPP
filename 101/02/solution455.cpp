
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child = 0;
        int cookie = 0;
        while(child < g.size() && cookie < s.size()) {
            if (g[child] <= s[cookie] ) {
                ++child;
            }
            ++cookie;
        }
        return child;
    }
};

int main() {
    // vector<int> g = {1,2,3};
    // vector<int> s = {1,1};

    vector<int> g = {1,2};
    vector<int> s = {1,2,3};
    Solution solution;
    std::cout << solution.findContentChildren(g,s) << std::endl;
}