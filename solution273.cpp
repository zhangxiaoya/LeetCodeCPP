#include "solution273.h"

Solution273::Solution273()
{

}
string Solution273::toString(int n, string unit)
{
    string res = "";
    if(n == 0)
        return res;
    int h = n / 100;
    if(h != 0)
        res += hash[h] + " " + hash[100] + " ";
    n %= 100;
    int t = n / 10;
    if(t != 0)
    {
        if(t == 1)
            res += hash[n] + " ";
        else
            res += hash[t*10] + " ";
    }

    n %= 10;
    if(n !=0 && t != 1)
        res += hash[n]  + " ";

    return res + unit + " ";
}

string Solution273::numberToWords(int num)
{
    hash.insert(make_pair(0,"Zero"));
    hash.insert(make_pair(1,"One"));
    hash.insert(make_pair(2,"Two"));
    hash.insert(make_pair(3,"Three"));
    hash.insert(make_pair(4,"Four"));
    hash.insert(make_pair(5,"Five"));
    hash.insert(make_pair(6,"Six"));
    hash.insert(make_pair(7,"Seven"));
    hash.insert(make_pair(8,"Eight"));
    hash.insert(make_pair(9,"Nine"));
    hash.insert(make_pair(10,"Ten"));
    hash.insert(make_pair(11,"Eleven"));
    hash.insert(make_pair(12,"Twelve"));
    hash.insert(make_pair(13,"Thirteen"));
    hash.insert(make_pair(14,"Fourteen"));
    hash.insert(make_pair(15,"Fifteen"));
    hash.insert(make_pair(16,"Sixteen"));
    hash.insert(make_pair(17,"Seventeen"));
    hash.insert(make_pair(18,"Eighteen"));
    hash.insert(make_pair(19,"Nineteen"));
    hash.insert(make_pair(20,"Twenty"));
    hash.insert(make_pair(30,"Thirty"));
    hash.insert(make_pair(40,"Forty"));
    hash.insert(make_pair(50,"Fifty"));
    hash.insert(make_pair(60,"Sixty"));
    hash.insert(make_pair(70,"Seventy"));
    hash.insert(make_pair(80,"Eighty"));
    hash.insert(make_pair(90,"Ninety"));
    hash.insert(make_pair(100,"Hundred"));

    if(num == 0)
        return hash[num];
    string res;
    int b = num / 1000000000;
    res += toString(b,"Billion");
    num %= 1000000000;

    int m = num / 1000000;
    res += toString(m,"Million");
    num %= 1000000;

    int t = num / 1000;
    res += toString(t,"Thousand");
    num %= 1000;

    res += toString(num,"");
    if(res[res.length()-1] == ' ')
        res.erase(res.end()-1);
    return res;
}
