#include <iostream>

using namespace std;

//#include "TraverseTree/PreOrderTraverse/PreTraverseTree.h"
//#include "TraverseTree/InorderTreverse/InorderTraverseTree.h"
//#include "TraverseTree/PostOrderTraverse/PostOrderTraverseTree.h"
//#include "TraverseTree/LevelTraverse/LevelTraverseTree.h"

//#include "SolveProblem/MaxDepth/MaxDepthSolution.h"
#include "SolveProblem/PathSum/PathSumSolution.h"

int main()
{
//    PreTraverseTree preTraverseTree;
//    InorderTraverseTree inorderTraverseTree;
//    PostOrderTraverseTree postOrderTraverseTree;
//    LevelTraverseTree levelTraverseTree;
//    MaxDepthSolution maxDepthSolution;
    PathSumSolution pathSumSolution;
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    cout <<pathSumSolution.hasPathSum(root,6);
//    cout << maxDepthSolution.maxDepth(root);
//    for(auto l : levelTraverseTree.levelOrder(root))
//    {
//        for(auto a :l)
//            cout << a << " ";
//        cout << endl;
//    }

//    for(auto a: postOrderTraverseTree.postorderTraversal(root))
//        cout << a << " ";
//    for(auto a : inorderTraverseTree.inorderTraversal(root))
//        cout << a << " ";
//    for (auto a : preTraverseTree.preorderTraversal(root))
//        cout << a << " " << endl;
    return 0;
}