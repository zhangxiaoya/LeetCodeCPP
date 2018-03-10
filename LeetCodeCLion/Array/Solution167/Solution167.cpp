//
// Created by XiaoyaZhang on 2018/3/11.
//

#include "Solution167.h"

vector<int> Solution167::twoSum(vector<int> &numbers, int target)
{
    int low = 0;
    int high = numbers.size() -1;
    while(low < high)
    {
        if(numbers[low] + numbers[high] == target)
            break;
        if(numbers[low] + numbers[high] > target)
            high--;
        else
            low ++;
    }
    if(low < high)
        return vector<int>({low+1, high+1});
    return vector<int>();
}
