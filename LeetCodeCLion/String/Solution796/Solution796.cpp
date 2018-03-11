//
// Created by XiaoyaZhang on 2018/3/11.
//

#include "Solution796.h"

bool Solution796::rotateString(string A, string B)
{
    if(A.length() != B.length())
        return false;
    return (A + A).find(B) != std::string::npos;
}
