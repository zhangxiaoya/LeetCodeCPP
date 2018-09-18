
#include "Solution709.h"

string Solution709::toLowerCase(string str)
{
    for(char& a : str)
        if(a >= 'A' && a<= 'Z')
            a = a + 32;
    return str;
}
