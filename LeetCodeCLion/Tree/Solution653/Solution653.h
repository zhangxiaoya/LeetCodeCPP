//
// Created by XiaoyaZhang on 2018/3/11.
//

#ifndef LEETCODECLION_SOLUTION653_H
#define LEETCODECLION_SOLUTION653_H


#include "../../CommonObjects/TreeNode.h"
#include <unordered_map>

using std::unordered_map;

class Solution653
{
public:
    bool findTarget(TreeNode* root, int k);

private:
    bool DFS(TreeNode* root, unordered_map<int,int>& hash, int k);
};


#endif //LEETCODECLION_SOLUTION653_H
