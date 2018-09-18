
#include "Solution535.h"

string Solution535::encode(string longUrl)
{
    this->surfix.push_back(longUrl);
    string shortURL = "http://tinyurl.com/" + std::to_string(this->surfix.size()-1);
    return shortURL;
}

string Solution535::decode(string shortUrl)
{
    int i;
    for(i = shortUrl.size()-1; i > 0; --i)
        if(shortUrl[i] == '/')
            break;
        string index = shortUrl.substr(i+1);

    return this->surfix[std::stoi(index)];
}
