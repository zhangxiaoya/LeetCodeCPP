#ifndef SOLUTION013_H
#define SOLUTION013_H

#include <string>
#include <algorithm>
#include <map>
using std::string;
using std::map;

//using namespace std;

#ifdef __GNUC__
#include <ext/hash_map>
#else
#include <hash_map>
#endif

#ifdef __GXX_EXPERIMENTAL_CXX0X__
#include <unordered_map>
#endif

//namespace std
//{
//using namespace __gnu_cxx;
//}

namespace __gnu_cxx
{
template<> struct hash< std::string >
{
    size_t operator()( const std::string& x ) const
    {
        return hash< const char* >()(x.c_str());
    }
};
}

using namespace __gnu_cxx;
//using namespace __gnu_cxx;

class Solution013
{
public:
    Solution013();
    int romanToInt(string s) ;
};

#endif // SOLUTION013_H
