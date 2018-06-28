//
// Created by runisys on 18-6-28.
//

#include "Solution412.h"

bool Solution412::isMultipliesByFive(int n)
{
    return n % 5 == 0;
}

bool Solution412::isMultipliesByThree(int n)
{
    return n % 3 == 0;
}

vector<string> Solution412::fizzBuzz(int n)
{
    vector<string> res;
    for (int i = 1; i <= n; ++i)
    {
        if (isMultipliesByThree(i) && isMultipliesByFive(i))
            res.push_back("FizzBuzz");
        else if (isMultipliesByFive(i))
            res.push_back("Buzz");
        else if (isMultipliesByThree(i))
            res.push_back("Fizz");
        else
            res.push_back(std::to_string(i));
    }
    return res;
}