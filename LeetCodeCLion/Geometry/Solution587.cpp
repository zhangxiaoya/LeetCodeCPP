
#include "Solution587.h"

bool Solution587::ToLeft(Point p, Point q, Point s)
{
    int area2 = p.x * q.y - p.y * q.x +
                q.x * s.y - q.y * s.x +
                s.x * p.y - s.y * p.x;
    return area2 > 0;
}

int Solution587::Ltl(vector<Point> points)
{
    int ltl = 0;
    for (int i = 0; i < points.size(); ++i)
    {
        if (points[i].y < points[ltl].y || (points[i].y == points[ltl].y && points[i].x < points[ltl].x))
            ltl = i;
    }
    return ltl;
}

vector<Point> Solution587::outerTrees(vector<Point> &points)
{
    if(points.size() < 4)
        return points;
    vector<bool> flags(points.size(), false);
    vector<Point> res;
    int ltl = Ltl(points);
    int k = ltl;
    do
    {
        res.push_back(points[k]);
        int s = -1;
        for (int i = 0; i < points.size(); ++i)
        {
            if (i != s && i != k &&
                (s == -1 || !ToLeft(points[k], points[s], points[i]))
                && flags[i] == false)
                s = i;
        }
        s = k;
        flags[k] = true;
    } while (k != ltl);
    return res;
}