#include "solution347.h"
#include <algorithm>

struct Node
{
public:
    Node() :times(-1) {}
    Node(int v,int t):value(v),times(t){}
    int value;
    int times;
};

bool comp(Node* left,Node* right)
{
    return left->times > right->times;
}

Solution347::Solution347()
{

}

vector<int> Solution347::topKFrequent(vector<int> &nums, int k)
{
    sort(nums.begin(),nums.end());
    vector<Node*> inputNumbers;
    int priviousNum =0;
    for(vector<int>::iterator it = nums.begin();it != nums.end();++it)
    {
        if(it == nums.begin())
        {
            inputNumbers.push_back(new Node(*it,1));
            priviousNum = *it;
        }
        else
        {
            if(priviousNum == *it)
            {
                (inputNumbers[inputNumbers.size()-1])->times ++;
            }
            else
            {
                inputNumbers.push_back(new Node(*it,1));
                priviousNum = *it;
            }
        }

    }
    sort(inputNumbers.begin(),inputNumbers.end(),comp);
    vector<int> res;
    for(int i =0;i<k;++i)
        res.push_back(inputNumbers[i]->value);
    return res;
}
