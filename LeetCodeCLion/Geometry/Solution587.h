
#ifndef LEETCODECLION_SOLUTION587_H
#define LEETCODECLION_SOLUTION587_H

#include <vector>

using std::vector;

struct Point
{
    int x;
    int y;

    Point() : x(0), y(0) {}

    Point(int a, int b) : x(a), y(b) {}
};

class Solution587
{
private:
    int Ltl(vector<Point> points);

    bool ToLeft(Point p, Point q, Point s);
public:
    vector<Point> outerTrees(vector<Point> &points);
};


#endif //LEETCODECLION_SOLUTION587_H
