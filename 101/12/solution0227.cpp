class Solution {
public:
    int calculate(string s) {
        int d =0;
        int res = 0;
        char opt = '+';
        stack<int> nums;
        for(int i =0; i< s.length(); ++i) {
            if(s[i] >= '0') {
                d = d * 10 + (s[i] - '0');
            }
            if(s[i] < '0' && s[i] != ' ' || i == s.length() - 1) {
                if(opt == '+') {
                    nums.push(d);
                } else if(opt == '-') {
                    nums.push(-d);
                } else if(opt == '*' || opt == '/') {
                    int tmp = opt == '*' ? nums.top() * d : nums.top() /d;
                    nums.pop();
                    nums.push(tmp);
                }
                opt = s[i];
                d = 0;
            }
        }
        for(; !nums.empty();nums.pop()) {
            res += nums.top();
        }
        return res;
    }
};
