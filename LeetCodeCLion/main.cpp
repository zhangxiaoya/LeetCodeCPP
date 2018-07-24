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
//#include "Matrix/Solution832/Solution832.h"
//#include "Matrix/Solution861/Solution861.h"
//#include "Array/Solution384/Solution384.h"
//#include "Math/Solution371/Solution371.h"
//#include "Array/Solution238/Solution238.h"
//#include "BinarySearch/Solution378/Solution378.h"
//#include "Array/Solution287/Solution287.h"
//#include "Math/Solution372/Solution372.h"
//#include "BinarySearch/Solution704/Solution704.h"
//#include "Math/Solution869/Solution869.h"
//#include "Math/Solution868/Solution868.h"
#include "BinarySearch/Solution875/Solution875.h"

int main()
{
    Solution875 solution875;
    vector<int> piles = {3,6,7,11};
    cout << solution875.minEatingSpeed(piles, 8) << endl;
//    Solution868 solution868;
//    cout << solution868.binaryGap(22) << endl;
//    Solution869 solution869;
//    cout << solution869.reorderedPowerOf2(46) << endl;
//    Solution704 solution704;
//    vector<int> nums = {-1,0,3,5,9,12};
//    cout << solution704.search(nums, 2);
//    vector<int> b = {1,7,7,4,3,1,7,0,1,4,4,9,2,8,5,0,0,9,3,1,2,5,9,6,0,9,9,0,9,6,0,5,3,7,9,8,8,9,8,2,5,4,1,9,3,8,0,5,9,5,6,1,1,8,9,3,7,8,5,8,5,5,3,0,4,3,1,5,4,1,7,9,6,8,8,9,8,0,6,7,8,3,1,1,1,0,6,8,1,1,6,6,9,1,8,5,6,9,0,0,1,7,1,7,7,2,8,5,4,4,5,2,9,6,5,0,8,1,0,9,5,8,7,6,0,6,1,8,7,2,9,8,1,0,7,9,4,7,6,9,2,3,1,3,9,9,6,8,0,8,9,7,7,7,3,9,5,5,7,4,9,8,3,0,1,2,1,5,0,8,4,4,3,8,9,3,7,5,3,9,4,4,9,3,3,2,4,8,9,3,3,8,2,8,1,3,2,2,8,4,2,5,0,6,3,0,9,0,5,4,1,1,8,0,4,2,5,8,2,4,2,7,5,4,7,6,9,0,8,9,6,1,4,7,7,9,7,8,1,4,4,3,6,4,5,2,6,0,1,1,5,3,8,0,9,8,8,0,0,6,1,6,9,6,5,8,7,4,8,9,9,2,4,7,7,9,9,5,2,2,6,9,7,7,9,8,5,9,8,5,5,0,3,5,8,9,5,7,3,4,6,4,6,2,3,5,2,3,1,4,5,9,3,3,6,4,1,3,3,2,0,0,4,4,7,2,3,3,9,8,7,8,5,5,0,8,3,4,1,4,0,9,5,5,4,4,9,7,7,4,1,8,7,5,2,4,9,7,9,1,7,8,9,2,4,1,1,7,6,4,3,6,5,0,2,1,4,3,9,2,0,0,2,9,8,4,5,7,3,5,8,2,3,9,5,9,1,8,8,9,2,3,7,0,4,1,1,8,7,0,2,7,3,4,6,1,0,3,8,5,8,9,8,4,8,3,5,1,1,4,2,5,9,0,5,3,1,7,4,8,9,6,7,2,3,5,5,3,9,6,9,9,5,7,3,5,2,9,9,5,5,1,0,6,3,8,0,5,5,6,5,6,4,5,1,7,0,6,3,9,4,4,9,1,3,4,7,7,5,8,2,0,9,2,7,3,0,9,0,7,7,7,4,1,2,5,1,3,3,6,4,8,2,5,9,5,0,8,2,5,6,4,8,8,8,7,3,1,8,5,0,5,2,4,8,5,1,1,0,7,9,6,5,1,2,6,6,4,7,0,9,5,6,9,3,7,8,8,8,6,5,8,3,8,5,4,5,8,5,7,5,7,3,2,8,7,1,7,1,8,7,3,3,6,2,9,3,3,9,3,1,5,1,5,5,8,1,2,7,8,9,2,5,4,5,4,2,6,1,3,6,0,6,9,6,1,0,1,4,0,4,5,5,8,2,2,6,3,4,3,4,3,8,9,7,5,5,9,1,8,5,9,9,1,8,7,2,1,1,8,1,5,6,8,5,8,0,2,4,4,7,8,9,5,9,8,0,5,0,3,5,5,2,6,8,3,4,1,4,7,1,7,2,7,5,8,8,7,2,2,3,9,2,2,7,3,2,9,0,2,3,6,9,7,2,8,0,8,1,6,5,2,3,0,2,0,0,0,9,2,2,2,3,6,6,0,9,1,0,0,3,5,8,3,2,0,3,5,1,4,1,6,8,7,6,0,9,8,0,1,0,4,5,6,0,2,8,2,5,0,2,8,5,2,3,0,2,6,7,3,0,0,2,1,9,0,1,9,9,2,0,1,6,7,7,9,9,6,1,4,8,5,5,6,7,0,6,1,7,3,5,9,3,9,0,5,9,2,4,8,6,6,2,2,3,9,3,5,7,4,1,6,9,8,2,6,9,0,0,8,5,7,7,0,6,0,5,7,4,9,6,0,7,8,4,3,9,8,8,7,4,1,5,6,0,9,4,1,9,4,9,4,1,8,6,7,8,2,5,2,3,3,4,3,3,1,6,4,1,6,1,5,7,8,1,9,7,6,0,8,0,1,4,4,0,1,1,8,3,8,3,8,3,9,1,6,0,7,1,3,3,4,9,3,5,2,4,2,0,7,3,3,8,7,7,8,8,0,9,3,1,2,2,4,3,3,3,6,1,6,9,6,2,0,1,7,5,6,2,5,3,5,0,3,2,7,2,3,0,3,6,1,7,8,7,0,4,0,6,7,6,6,3,9,8,5,8,3,3,0,9,6,7,1,9,2,1,3,5,1,6,3,4,3,4,1,6,8,4,2,5}
//    vector<int> b = {2,0,0};
//    Solution372 solution372;
//    cout << solution372.superPow(2147483647,b) << endl;

//    vector<int> nums = {1,2,3,4,3};
//    Solution287 solution287;
//    cout <<solution287.findDuplicate(nums) << endl;
    // vector<int> nums = {1,2,3,4,3};
    // Solution287 solution287;
    // cout <<solution287.findDuplicate(nums) << endl;


//#include <iostream>
//#include <cstdio>
//#include <cstring>
//    using namespace std;
//    int dp[1500][1500];
//    string str1,str2;
//
//    int main()
//    {
//        while(cin>>str1){
//            int len = str1.length();
//            memset(dp,0,sizeof(dp));
//            for(int i=0,j=len-1;j>=0,i<len;j--,i++){
//                str1[j] = toupper(str1[j]);
//                str2[i] = str1[j];
//            }
//            for(int i=1;i<=len;i++){
//                for(int j=1;j<=len;j++){
//                    if(str1[i-1] == str2[j-1])dp[i][j] = dp[i-1][j-1] + 1;
//                    else dp[i][j] = dp[i][j-1] > dp[i-1][j] ? dp[i][j-1] : dp[i-1][j];
//                }
//            }
//            printf("%d\n",len - dp[len][len]);
//        }
//        return 0;
//    }
//    Solution378 solution378;
//    vector<vector<int>> matrix = {
//            {-15}
//            {1,  5,  9},
//            {10, 11, 13},
//            {12, 13, 15}
//    };
//    cout << solution378.kthSmallest(matrix, 1) << endl;
//    Solution238 solution238;
//    vector<int> nums = {1,2,3,4};
//    for(auto a: solution238.productExceptSelf(nums))
//        cout << a << " ";
//    cout << endl;
//    Solution371 solution371;
//    cout << solution371.getSum(1,1) << endl;
//    vector<int> nums= {1,2,3};
//    Solution384 solution(nums);
//    for(auto a: solution.shuffle())
//        cout << a << " ";
//    Solution832 solution832;
//    Solution861 solution861;
//    vector<vector<int>> m = {
//            {0,0,1,1},
//            {1,0,1,0},
//            {1,1,0,0}
//    };
//    cout << solution861.matrixScore(m) << endl;
//    for(auto row : solution832.flipAndInvertImage(m))
//    {
//        for(auto a: row)
//            cout << a <<" ";
//        cout << endl;
//    }
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