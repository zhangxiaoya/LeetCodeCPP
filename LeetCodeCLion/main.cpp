#include <iostream>

using namespace std;
#include "ClimbingStairs/070/Solution070.h"
#include "ClimbingStairs/746/Solution746.h"
#include "Math/Solution069/Solution069.h"
#include "String/Solution788/Solution788.h"
#include "String/Solution784/Solution784.h"

int main() {
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

    Solution784 solution784;
    auto result = solution784.letterCasePermutation("abc");
    for(int i = 0; i < result.size();++i)
        cout << result[i] << endl;
    return 0;
}