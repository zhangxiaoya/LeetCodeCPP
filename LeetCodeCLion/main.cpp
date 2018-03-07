#include <iostream>

using namespace std;
#include "ClimbingStairs/070/Solution070.h"
#include "ClimbingStairs/746/Solution746.h"

int main() {
//    Solution070 solution070;
//    cout << solution070.climbStairs(2) <<endl;
//    cout << solution070.climbStairs(1) <<endl;
//    cout << solution070.climbStairs(3) <<endl;
//    cout << solution070.climbStairs(4) <<endl;
    Solution746 solution746;
    vector<int> cost = {10,15,16};
    cout << solution746.minCostClimbingStairs(cost) << endl;

    return 0;
}