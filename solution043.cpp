#include "solution043.h"

Solution043::Solution043()
{

}

string Solution043::multiply(std::string num1, std::string num2)
{
    if(num1.empty() || num2.empty())
        return "";
    if(num1.compare("0") == 0 || num2.compare("0") == 0)
        return "0";
    string Res;

    int len1 = num1.length();
    int len2 = num2.length();

    std::reverse(num1.begin(),num1.end());
    std::reverse(num2.begin(),num2.end());

    int *res = new int[len1 + len2];
    for(int i =0;i<len1+len2; ++ i)
        res[i] = 0;

    int i = 0;
    int j = 0;
    for(;i<len1;++i)
    {
        int pow = 0;

        for(j=0;j<len2;++j)
        {
            res[i+j] +=((num1[i]-'0') * (num2[j]-'0') + pow);
            pow = res[i+j] / 10;
            res[i+j] %= 10;
        }
        while(pow)
        {
            res[i+j] += (pow % 10);
            pow /= 10;
            j++;
        }
    }
    for(int k = i+j-2;k>=0;--k)
        Res.push_back(res[k] + '0');
    return Res;
}
