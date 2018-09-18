
#include "Solution890.h"
#include <unordered_map>

using std::unordered_map;

vector<string> Solution890::findAndReplacePattern(vector<string> &words, string pattern)
{
    vector<string> res;
    auto code = encode(pattern);
    for(auto word : words)
        if(encode(word) == code)
            res.push_back(word);
    return res;
}

string Solution890::encode(string &word)
{
    unordered_map<char, int> counter;
    for (auto c: word)
        if (counter.count(c) == 0)
            counter.insert({c, counter.size()});
    string code = word;
    for (char &c: code)
        c = 'a' + counter[c];
    return code;
}
