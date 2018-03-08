#include <iostream>

using namespace std;
#include "ClimbingStairs/070/Solution070.h"
#include "ClimbingStairs/746/Solution746.h"
#include "Math/Solution069/Solution069.h"
#include "String/Solution788/Solution788.h"
#include "String/Solution784/Solution784.h"
#include "Tree/Solution783/Solution783.h"
#include "CommonMethod/CreateTreeFromArray.h"

int main() {
    CreateTreeFromArray treeCreator;
    TreeNode* root = NULL;
    int array[] = {4,2,6,1,3,-1,-1};
    treeCreator.CreateTree(root,array, 7);
    Solution783 solution783;
    cout << solution783.minDiffInBST(root) << endl;
//    Solution070 solution070;
//    cout << solution070.climbStairs(2) <<endl;
//    cout << solution070.climbStairs(1) <<endl;
//    cout << solution070.climbStairs(3) <<endl;
//    cout << solution070.climbStairs(4) <<endl;
//    Solution746 solution746;
//    vector<int> cost = {10,15,16};
//    cout << solution746.minCostClimbingStairs(cost) << endl;

//    Solution069 solution069;
//    cout << solution069.mySqrt(4)<< endl;
//    cout << solution069.mySqrt(8) << endl;

//    Solution788 solution788;
//    cout << solution788.rotatedDigits(10) << endl;

//    Solution784 solution784;
//    auto result = solution784.letterCasePermutation("abc");
//    for(int i = 0; i < result.size();++i)
//        cout << result[i] << endl;
    return 0;
}