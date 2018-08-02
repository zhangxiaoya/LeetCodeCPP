
#include "Solution542.h"

#include <queue>

using std::queue;

vector<vector<int>> Solution542::updateMatrix(vector<vector<int>> &matrix)
{
    int hight = matrix.size();
    int width = matrix[0].size();

    queue<point> q;
    for (int r = 0; r < hight; ++r)
    {
        for (int c = 0; c < width; ++c)
        {
            if (matrix[r][c] == 1)
            {
                if (r - 1 >= 0 && matrix[r - 1][c] == 0)
                {
                    matrix[r][c] = -1;
                    q.push({c, r});
                    continue;
                }
                if (r + 1 < hight && matrix[r + 1][c] == 0)
                {
                    matrix[r][c] = -1;
                    q.push({c, r});
                    continue;
                }
                if (c - 1 >= 0 && matrix[r][c - 1] == 0)
                {
                    matrix[r][c] = -1;
                    q.push({c, r});
                    continue;
                }
                if (c + 1 < width && matrix[r][c + 1] == 0)
                {
                    matrix[r][c] = -1;
                    q.push({c, r});
                    continue;
                }
            }
        }
    }
    int distance = 1;
    while (!q.empty())
    {
        queue<point> qq;
        distance++;
        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            if (p.y - 1 >= 0 && matrix[p.y - 1][p.x] == 1)
            {
                matrix[p.y - 1][p.x] = distance;
                qq.push({p.x, p.y - 1});
            }
            if (p.y + 1 < hight && matrix[p.y + 1][p.x] == 1)
            {
                matrix[p.y + 1][p.x] = distance;
                qq.push({ p.x, p.y + 1});
            }
            if (p.x - 1 >= 0 && matrix[p.y][p.x - 1] == 1)
            {
                matrix[p.y][p.x - 1] = distance;
                qq.push({ p.x - 1, p.y});
            }
            if (p.x + 1 < width && matrix[p.y][p.x + 1] == 1)
            {
                matrix[p.y][p.x + 1] = distance;
                qq.push({p.x + 1, p.y});
            }
        }
        q = qq;
    }
    for(int r = 0; r < hight;++r)
    {
        for(int c = 0; c < width;++c)
            if(matrix[r][c] == -1)
                matrix[r][c] = 1;
    }
    return matrix;
}