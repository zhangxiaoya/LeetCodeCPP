class Solution {
public:
    int extending_substr(string s, int l, int r) {
        int count = 0;
        while(l>=0 && l < s.length() && s[l] == s[r]) {
            --l;
            ++r;
            ++count;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); ++i) {
            count += extending_substr(s, i, i);
            count += extending_substr(s, i, i + 1);
        }
        return count;
    }
};
