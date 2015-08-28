#include "solution168.h"

Solution168::Solution168()
{

}

string Solution168::convertToTitle(int n)
{
    string res;
    if(n == 0)
        return res;
    while(n)
    {
        int t = (n-1) % 26;
        res += (t + 'A');
        n =(n-1)/ 26;
    }
    reverse(res.begin(),res.end());
    return res;
}
