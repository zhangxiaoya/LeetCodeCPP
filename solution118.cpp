#include "solution118.h"

Solution118::Solution118()
{
}
vector< vector<int> > Solution118::generate(int numRows)
{
    vector< vector<int> > res;
    if(numRows < 1)
        return res;

    vector<int> vec;
    vec.push_back(1);
    res.push_back(vec);

    if(numRows == 1)
        return res;
    for(int i=1;i<numRows;++i)
    {
        vector<int> tmp = res[i-1];
        vector<int> vec;
        vec.clear();
        int j;
        for(j = 0;j<i;++j)
        {
            if(j == 0)
                vec.push_back(tmp[j] + 0);
            else
                vec.push_back(tmp[j] + tmp[j-1]);
        }
        vec.push_back(tmp[j-1] + 0);
        res.push_back(vec);
    }
    return res;
}
