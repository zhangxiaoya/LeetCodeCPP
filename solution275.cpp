#include "solution275.h"

Solution275::Solution275()
{

}

int Solution275::hIndex(vector<int> &citations)
{
    if(citations.empty())
        return 0;
    int len = citations.size();
    int mid;
    int beg = 0;
    int end = len -1;
    while(beg <= end)
    {
        mid = (beg + end) >> 1;
        if(citations[mid] == (len - mid))
            return citations[mid];
        else if(citations[mid] > (len - mid))
            end = mid -1;
        else
            beg = mid + 1;
    }
    return (len -end -1);
}
