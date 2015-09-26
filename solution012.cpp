#include "solution012.h"

Solution012::Solution012()
{

}

string Solution012::intToRoman(int num)
{
    map<int,string> hash;
    hash.insert(make_pair(1,"I"));
    hash.insert(make_pair(4,"IV"));
    hash.insert(make_pair(5,"V"));
    hash.insert(make_pair(9,"IX"));
    hash.insert(make_pair(10,"X"));
    hash.insert(make_pair(40,"XL"));
    hash.insert(make_pair(50,"L"));
    hash.insert(make_pair(90,"XC"));
    hash.insert(make_pair(100,"C"));
    hash.insert(make_pair(400,"CD"));
    hash.insert(make_pair(500,"D"));
    hash.insert(make_pair(900,"CM"));
    hash.insert(make_pair(1000,"M"));
    vector<int> val = {1000,900,500,400,100,90,50,40,10,9,5,4,1};

    string res = "";
    int i = 0;
    while(i<val.size())
    {
        if(num >= val[i])
        {
            res += hash[val[i]];
            num -= val[i];
        }
        else
            i++;
    }
    return res;
}
