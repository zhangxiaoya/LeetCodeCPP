class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) {
            return false;
        }
        vector<int> s_index(256, 0);
        vector<int> t_index(256, 0);

        for(int i =0; i< s.length(); ++i) {
            if(s_index[s[i]] != t_index[t[i]]) {
                return false;
            }
            s_index[s[i]] = i + 1;
            t_index[t[i]] = i + 1;
        }
        return true;
    }
};
