
#ifndef LEETCODECLION_SOLUTION535_H
#define LEETCODECLION_SOLUTION535_H

#include <vector>
#include <string>
using std::vector;
using std::string;

class Solution535
{
private:
    vector<string> surfix;
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl);

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl);
};


#endif //LEETCODECLION_SOLUTION535_H
