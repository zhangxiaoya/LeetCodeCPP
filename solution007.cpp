#include "solution007.h"

solution007::solution007()
{
}

int solution007::reverse(int x)
{

    const int max = 2147483647;

    const int min = -2147483648;

    double result = 0;
    while(x)
    {
        if(x > 0 && (result *unsigned(10)) > (max))
            return 0;
        if(x  < 0 && (result *unsigned(10)) < (min))
            return 0;
        result = result * 10 + x % 10;
        x /= 10;

    }
    return int(result);

}
