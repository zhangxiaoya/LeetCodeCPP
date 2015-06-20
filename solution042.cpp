#include "solution042.h"
#include <stack>
Solution042::Solution042()
{
}
int Solution042::trap(vector<int> &height)
{
    stack<int> s;
    int sum = 0;
    int len = height.size();
    int left;
    bool flag = false;
    s.push(-1);
    for(int i =0;i< len;++i)
    {
        if(!flag)
        {
            if(height[i] > s.top())
            {
                s.pop();
                s.push(height[i]);
            }
            else
            {
                left = s.top();
                flag = true;
                s.push(height[i]);
            }
        }
        else
        {
            if(height[i] < left)
                s.push(height[i]);
            else
            {
                while(!s.empty())
                {
                    sum += (left - s.top());
                    s.pop();
                }
                s.push(height[i]);
                flag = false;
            }
        }
    }
    if(!s.empty())
    {
        int right = s.top();
        s.pop();
        while(!s.empty())
        {
            int t = s.top();
            if(t >= right)
                right = t;
            else
                 sum += (right - t);
            s.pop();
        }
    }
    return sum;
}
