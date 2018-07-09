
#include "Solution867.h"
#include <string>

using std::string;

bool Solution867::isPrime(int val)
{
    if(val < 2 || val % 2== 0)
        return val == 2;
    for(int i = 3; i*i <= val;i += 2)
    {
        if(val % i == 0)
            return false;
    }
    return true;
}

int Solution867::primePalindrome(int N)
{
    if(N >= 8 && N <=11)
        return 11;
    auto i = 0;
    while (true)
    {
        string s = std::to_string(i);
        string r(s.rbegin(), s.rend());
        int val = std::stoi(s + r.substr(1));
        if (val >= N && isPrime(val))
            return val;
        ++i;
    }
}