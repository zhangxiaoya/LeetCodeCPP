#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S) {
        unordered_map<char, int> ends;
        for(int i =0; i< S.length(); ++i) {
            ends[S[i]] = i;
        }
        vector<int> result;
        int sub_end = 0;
        int sub_start = 0;
        for(int i = 0; i < S.length(); ++i) {
            sub_end = max(sub_end, ends[S[i]]);
            if(i == sub_end) {
                result.push_back(sub_end - sub_start + 1);
                sub_start = sub_end + 1;
            }
        }
        return result;
    }
};


int main() {
    string s = "ababcbacadefegdehijhklij";
    Solution solution;
    vector<int> result = solution.partitionLabels(s);
    for(auto i: result) {
        cout <<i << endl;
    }
    return 0;
}