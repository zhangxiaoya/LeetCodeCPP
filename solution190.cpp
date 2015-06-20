#include "solution190.h"

Solution190::Solution190()
{
}

uint32_t Solution190::reverseBits(uint32_t n)
{
    uint32_t result =0;
    int count =32;
    while(count)
    {
        result <<= 1;
        --count;
        if(n & 0x0001)
            result |= 0x0001;
        n >>= 1;
    }
    return result;
}
