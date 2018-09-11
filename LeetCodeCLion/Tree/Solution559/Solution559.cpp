
#include "Solution559.h"

int Solution559::maxDepth(Node *root)
{
    int maxRes = 0;
    if(root == nullptr)
        return maxRes;
    for(int i=0;i < root->children.size();++i)
    {
        int curMax = maxDepth(root->children[i]);
        if(curMax > maxRes)
            maxRes = curMax;
    }
    return maxRes +1;
}