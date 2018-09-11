
#ifndef LEETCODECLION_NODE_H
#define LEETCODECLION_NODE_H

#include <vector>

using std::vector;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};


#endif //LEETCODECLION_NODE_H
