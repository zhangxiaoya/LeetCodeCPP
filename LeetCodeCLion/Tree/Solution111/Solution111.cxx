//
// Created by ynzha on 2018/3/9.
//

#include "Solution111.h"
#include <deque>

using std::deque;

int Solution111::minDepth(TreeNode *root)
{
    int depth = 0;
    if(root == NULL)
        return depth;

    deque<TreeNode*> que;
    que.push_back(root);
    int lastLayerWidth = 1;
    while(true)
    {
        depth++;
        int currentLayerWidth = 0;
        for(int i = 0; i< lastLayerWidth; ++ i)
        {
            TreeNode* node = que.front();
            que.pop_front();
            if(node->left == NULL && node->right == NULL)
            {
                currentLayerWidth = 0;
                break;
            }
            else
            {
                if(node->left)
                {
                    que.push_back(node->left);
                    currentLayerWidth ++;
                }
                if(node->right)
                {
                    que.push_back(node->right);
                    currentLayerWidth ++;
                }
            }
        }
        lastLayerWidth = currentLayerWidth;
        if(lastLayerWidth == 0)
            break;
    }
    return depth;
}

