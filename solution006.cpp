#include "solution006.h"

Solution006::Solution006()
{
}

string Solution006::convert(string s, int nRows)
{
    if(nRows < 2)
        return s;
    string result = "";
    for(int row = 0;row < nRows; ++ row)
    {
        if(row == 0|| row == nRows -1)
        {
            int step = nRows + nRows - 2;
            int i=row;
            while(i < s.length())
            {
                result += s[i];
                i += step;
            }
        }
        else
        {
            int i = row;
            int midstepodd = (nRows - 1 - row) * 2;
            int midstepeven = row * 2;
            int col = 1;
            while(i < s.length())
            {
                result += s[i];
                if(col & 0x1)
                    i += midstepodd;
                else
                    i += midstepeven;
                col ++;
            }
        }
    }
    return result;
}
