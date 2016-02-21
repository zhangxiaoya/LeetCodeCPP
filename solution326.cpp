#include "solution326.h"

Solution326::Solution326()
{

}

bool Solution326::isPowerOfThree(int n)
{
    return n >0 && (int(pow(3,19)) % n ==0);
}
