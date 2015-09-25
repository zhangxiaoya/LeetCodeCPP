#include "solution022.h"

Solution022::Solution022()
{

}

vector<string> Solution022::generateParenthesis(int n)
{
    vector<string> list;
    generateOneByOne("",list,n,n);
    return list;
}

void Solution022::generateOneByOne(std::string sublist, vector<std::string>& list, int left, int right)
{
    if(left > right)
        return;
    if(left > 0)
        generateOneByOne(sublist+"(",list,left-1,right);
    if(right > 0)
        generateOneByOne(sublist+")",list,left,right-1);
    if(left == 0 && right ==0 )
    {
        list.push_back(sublist);
        return;
    }
}
