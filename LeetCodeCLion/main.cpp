#include <iostream>

using namespace std;
//#include "ClimbingStairs/070/Solution070.h"
//#include "ClimbingStairs/746/Solution746.h"
//#include "Math/Solution069/Solution069.h"
//#include "String/Solution788/Solution788.h"
//#include "String/Solution784/Solution784.h"
//#include "Tree/Solution783/Solution783.h"
//#include "CommonMethod/CreateTreeFromArray.h"
//#include "Tree/Solution530/Solution530.h"
//#include "Array/Solution532/Solution532.h"
//#include "Array/Solution045/Solution045.h"
//#include "Array/Solution128/Solution128.h"
//#include "Tree/Solution111/Solution111.h"
//#include "Array/Solution695/Solution695.h"
//#include "Array/Solution167/Solution167.h"
//#include "Array/Solution795/Solution795.h"
//#include "String/Solution796/Solution796.h"
//#include "String/Solution859/Solution859.h"
//#include "Math/Solution858/Solution858.h"
//#include "Heap/Solution857/Solution857.h"
//#include "Stack/Solution856/Solution856.h"
//#include "Map/Solution855/Solution855.h"
//#include "String/Solution647/Solution647.h"
//#include "Array/Solution412/Solution412.h"
//#include "String/Solution005/Solution005.h"
//#include "String/Solution010/Solution010.h"
//#include "String/Solution017/Solution017.h"
//#include "DP/Solution322/Solution322.h"
//#include "Math/Solution029/Solution029.h"
//#include "BackTracking/Solution046/Solution046.h"
//#include "String/Solution044/Solution044.h"
//#include "BackTracking/Solution047/Solution047.h"
//#include "Array/Solution860/Solution860.h"
//#include "Tree/Solution863/Solution863.h"
//#include "String/Solution844/Solution844.h"
//#include "Math/Solution050/Solution050.h"
//#include "DP/Solution338/Solution338.h"
//#include "DP/Solution413/Solution413.h"
//#include "Tree/Solution606/Solution606.h"
//#include "Tree/Solution617/Solution617.h"
//#include "Tree/Solution637/Solution637.h"
//#include "Tree/Solution563/Solution563.h"
//#include "Tree/Solution662/Solution662.h"
//#include "Tree/Solution501/Solution501.h"
//#include "Tree/Solution543/Solution543.h"
//#include "Tree/Solution113/Solution113.h"
//#include "Matrix/Solution868/Solution868.h"
#include "Matrix/Solution832/Solution832.h"

int main()
{
    Solution832 solution832;
    vector<vector<int>> m = {
            {1,1,0},
            {1,0,1},
            {0,0,0}
    };
    for(auto row : solution832.flipAndInvertImage(m))
    {
        for(auto a: row)
            cout << a <<" ";
        cout << endl;
    }
//    vector<vector<int>> m = {
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    };
//    Solution868 solution868;
//    for(auto row : solution868.transpose(m))
//    {
//        for(auto a : row)
//            cout << a << " ";
//        cout << endl;
//    }
//    Solution617 solution617;
//    Solution637 solution637;
//    Solution563 solution563;
//    Solution662 solution662;
//    Solution501 solution501;
//    Solution543 solution543;
//    Solution113 solution113;

//    TreeNode* root = new TreeNode(5);
//    root->left = new TreeNode(4);
//    root->right = new TreeNode(8);
//    root->left->left = new TreeNode(11);
//    root->left->left->right = new TreeNode(2);
//    root->left->left->left = new TreeNode(7);
//
//    root->right->left = new TreeNode(13);
//    root->right->right = new TreeNode(4);
//    root->right->right->left = new TreeNode(5);
//    root->right->right->right = new TreeNode(1);
//
//    for(auto path:solution113.pathSum(root,22))
//    {
//        for(auto a : path)
//            cout << a <<" ";
//        cout << endl;
//    }
//    cout << solution543.diameterOfBinaryTree(root) << endl;
//    for(auto a: solution501.findMode(root))
//        cout << a <<  " ";
//    cout << solution662.widthOfBinaryTree(root) << endl;
//    cout  << solution563.findTilt(root) << endl;

//    TreeNode* root1 = new TreeNode(2);
//    root1->left = new TreeNode(1);
//    root1->right = new TreeNode(3);
//    root1->left->right = new TreeNode(4);
//    root1->right->right = new TreeNode(7);
//    for(auto a : solution637.averageOfLevels(root))
//        cout << a << " ";

//    Solution606 solution606;
//    cout << solution606.tree2str(root);
//    vector<int> nums = {1,2,3,4};
//    Solution413 solution413;
//    cout << solution413.numberOfArithmeticSlices(nums) << endl;
//    Solution338 solution338;
//    for(auto a:solution338.countBits(11))
//        cout << a << " ";
//    Solution050 solution050;
//    int n = -2147483648;
//    cout << solution050.myPow(2.0,-2147483648) << endl;
//    string S = "ab##";
//    string T = "c#d#";
//    string S = "nzp#o#g";
//    string T = "b#nzp#o#g";
//    string S = "#ab#c";
//    string T = "ad#c";
//    Solution844 solution844;
//    cout <<solution844.backspaceCompare(S,T) << endl;
//    TreeNode* root = new TreeNode(3);
//    root->left = new TreeNode(5);
//    root->right = new TreeNode(1);
//    root->left->left = new TreeNode(6);
//    root->left->right = new TreeNode(2);
//    root->left->right->left = new TreeNode(7);
//    root->left->right->right = new TreeNode(4);
//    root->right->left = new TreeNode(0);
//    root->right->right = new TreeNode(8);
//    TreeNode* root =new TreeNode(0);
//    root->left = new TreeNode(1);
//    root->left->left = new TreeNode(3);
//    root->left->right = new TreeNode(2);
//    TreeNode* root = new TreeNode(0);
//    root->left = new TreeNode(1);
//    root->left->right = new TreeNode(2);
//    root->left->right->right = new TreeNode(3);
//    root->left->right->right->right = new TreeNode(4);
//    Solution863 solution863;
//    for(auto a : solution863.distanceK(root, root->left->right->right, 0))
//        cout << a << " ";
//    Solution860 solution860;
//    vector<int> bills = {5,5,10,10,20};
//    cout << solution860.lemonadeChange(bills) << endl;
//    Solution047 solution047;
//    vector<int> nums = {3,3,0,3};
//    for(auto ns:solution047.permuteUnique(nums))
//    {
//        for(auto n : ns)
//            cout <<n <<" ";
//        cout << endl;
//    }
//    Solution044 solution044;
//    cout << solution044.isMatch("aa","*")<<endl;
//    Solution046 solution046;
//    vector<int> nums = {1,2,3};
//    for(auto a: solution046.permute(nums))
//    {
//        for(auto n:a)
//            cout << n << " ";
//
//        cout<< endl;
//    }
//    Solution029 solution029;
//    cout << solution029.divide(-2147483648,-1) << endl;
//    vector<int> coins = {186,419,83,408};
//    vector<int> coins = {346,29,395,188,155,109};
//    Solution322 solution322;
//    cout <<solution322.coinChange(coins, 6249) << endl;
//    cout <<solution322.coinChange(coins, 9401) << endl;
//    Solution017 solution017;
//    for(auto s : solution017.letterCombinations("123"))
//        cout << s << endl;
//    char str[] = "abcd";
//    printAllPermutation(str, str);
//    Solution010 solution010;
//    cout << solution010.isMatch("mississippi","mis*is*p*.") << endl;
//    Solution005 solution005;
//    cout << solution005.longestPalindrome("cbbd") << endl;
//    Solution412 solution412;
//    for(auto item : solution412.fizzBuzz(15))
//        cout << item << endl;
//    string S = "aaa";
//    Solution647 solution647;
//    cout <<solution647.countSubstrings(S) << endl;
//    int N = 8;
//    ExamRoom* obj = new ExamRoom(N);
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    obj->leave(0);
//    obj->leave(7);
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    cout << "Seats : " << obj->seat() << endl;
//    obj->leave(0);

//    string S = "(()(()))";
//    string S = "(())()";
//    Solution856 solution856;
//    cout  << solution856.scoreOfParentheses(S) << endl;
//    vector<int> wage = {4,8,2,2,7};
//    vector<int> quality = {3,1,10,10,1};
//    Solution857 solution857;
//    cout << solution857.mincostToHireWorkers(quality, wage,3) << endl;
//    Solution858 solution858;
//    cout << solution858.mirrorReflection(4,3) << endl;
//    Solution859 solution859;
//    string A = "ab";
//    string B = "ba";

//    string A = "aa";
//    string B = "aa";
//    string A = "ab";
//    string B = "ab";
//    string A = "aaaaaaabc";
//    string B = "aaaaaaacb";
//    cout << solution859.buddyStrings(A,B) << endl;
//    Solution796 solution796;
//    cout << solution796.rotateString("abcde", "bcdea") << endl;
//    Solution795 solution795;
//    vector<int> nums = {2, 1, 4, 3};
//    cout << solution795.numSubarrayBoundedMax(nums, 2,3) << endl;
//    Solution167 solution167;
//    vector<int> nums = {2,3,4};
//    cout << solution167.twoSum(nums,6)[0]<<" "<<solution167.twoSum(nums,6)[1] << endl;
//    vector<vector<int> > grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
//                                 {0,0,0,0,0,0,0,1,1,1,0,0,0},
//                                 {0,1,1,0,1,0,0,0,0,0,0,0,0},
//{0,1,0,0,1,1,0,0,1,0,1,0,0},
//{0,1,0,0,1,1,0,0,1,1,1,0,0},
//{0,0,0,0,0,0,0,0,0,0,1,0,0},
//{0,0,0,0,0,0,0,1,1,1,0,0,0},
//{0,0,0,0,0,0,0,1,1,0,0,0,0}};
//    Solution695 solution695;
//    cout << solution695.maxAreaOfIsland(grid) << endl;

//    Solution111 solution111;
//    TreeNode* root = NULL;
//    CreateTreeFromArray creator;
//    vector<int>  nums = {1,2};
//    vector<int>  nums = {1,2,3,4,-1,-1,5};
//    vector<int>  nums = {1,-1,2};
//    vector<int> nums = {1,2,-1,3,-1,4,-1,5};
//    creator.CreateTree(root,nums);
//    cout << solution111.minDepth(root) << endl;
//    Solution128 solution128;
//    vector<int> nums = {100, 4, 200, 1, 3, 2};
//    cout << solution128.longestConsecutive(nums) << endl;
//    Solution045 solution045;
//    vector<int> nums = {2,3,1,1,4};
//    vector<int> nums = {3,0,0,0,4};
//    cout << solution045.jump(nums)<< endl;
//    Solution532 solution532;
//    vector<int> nums = {3, 1, 4, 1, 5};
//    vector<int> nums = {1, 1, 2, 1, 1};
//    cout << solution532.findPairs(nums,1)<< endl;
//    CreateTreeFromArray treeCreator;
//    TreeNode* root = NULL;
//    int array[] = {0,-1,2236,1277,2776,519};
//    treeCreator.CreateTree(root,array, 6);
//
//    Solution530 solution530;
//    cout << solution530.getMinimumDifference(root) << endl;
//    Solution783 solution783;
//    cout << solution783.minDiffInBST(root) << endl;
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