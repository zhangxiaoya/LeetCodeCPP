
#include "Solution299.h"

#include <unordered_map>
#include <vector>
using std::unordered_map;
using std::vector;

string Solution299::getHint(string secret, string guess)
{
    int ACount = 0;
    int BCount = 0;

    unordered_map<char, int> counter;
    vector<bool> flag(guess.size(), false);

    for(auto c : secret)
        counter[c] ++;

    for(int i = 0; i< secret.size();++i)
    {
        if(secret[i] == guess[i])
        {
            counter[secret[i]] --;
            ACount ++;
            flag[i] = true;
        }
    }
    for(auto i = 0; i< guess.size();++i)
    {
        if(counter[guess[i]] > 0 && !flag[i])
        {
            BCount++;
            counter[guess[i]] --;
        }
    }
    string res = std::to_string(ACount) + "A" + std::to_string(BCount) +"B";
    return res;
}
