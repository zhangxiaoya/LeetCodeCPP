#include "solution084.h"

Solution084::Solution084()
{
}

int Solution084::largestRectangleArea(vector<int> &height)
{
    if(height.size() == 0)
        return 0;
    stack<int> s;
    s.push(0);
    int leftArea = 0;
    int rightArea = 0;
    int maxArea = 0;
    height.push_back(0);;
    for(int i = 0;i<height.size();++i)
    {
        if(height[i] > height[s.top()])
            s.push(i);
        else
        {
            while(!s.empty() && height[s.top()] > height[i])
            {
                int t = s.top();
                s.pop();
                leftArea = (s.empty()? t + 1:t-s.top()) * height[t];
                rightArea = (i-t-1)*height[t];
                maxArea = max(leftArea+rightArea,maxArea);
            }
            s.push(i);
        }
    }
    return maxArea;
}
