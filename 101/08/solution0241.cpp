class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> res;
        for(int i = 0; i < expression.length(); ++i) {
            char opt = expression[i];
            if(opt == '+' || opt == '-' || opt == '*') {
                vector<int> res_left = diffWaysToCompute(expression.substr(0, i));
                vector<int> res_right = diffWaysToCompute(expression.substr(i + 1));
                for(int l : res_left) {
                    for(int r : res_right) {
                        switch(opt) {
                            case '-' : res.push_back(l - r); break;
                            case '+' : res.push_back(l + r); break;
                            case '*' : res.push_back(l * r); break;
                        }
                    }
                }
            }
        }
        if(res.empty()) {
            res.push_back(stoi(expression));
        }
        return res;
    }
};
