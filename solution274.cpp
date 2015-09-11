#include "solution274.h"

Solution274::Solution274()
{

}

int Solution274::hIndex(vector<int> &citations)
{
    if(citations.empty())
        return 0;
    int n= citations.size();

    vector<int> hash(n+1,0);
    for(int i=0;i<n;++i)
    {
        if(citations[i] >= n)
            hash[n] ++;
        else
            hash[citations[i]]++;
    }
    int numOfpaper = 0;
    for(int i=n;i>=0;--i)
    {
        numOfpaper += hash[i];
        if(numOfpaper >= i)
            return i;
    }
//    if(n <2)
//        return citations[0] == 0?0:1;
//    multimap<int,int> h;
//    for(int i = 0;i<citations.size();++i)
//        h.insert(make_pair(citations[i],0));
//    multimap<int,int>::iterator it1,it2;
//    it1 = h.begin();
//    it2 = h.begin();
//    it2 ++;
//    while(it2 != h.end())
//    {
//        it2->second = it1->second + 1;
//        if(it2->first >= (n-it2->second))
//            return it2->first;
//        it2++;
//        it1++;
//    }
}
