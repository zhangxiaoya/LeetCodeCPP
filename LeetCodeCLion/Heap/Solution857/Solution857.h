//
// Created by runisys on 18-6-27.
//

#ifndef LEETCODECLION_SOLUTION857_H
#define LEETCODECLION_SOLUTION857_H

#include <vector>

using std::vector;

class Solution857
{
public:
    struct Worker
    {
        Worker(int wage, int quality) :
                radio(static_cast<double>(wage) / quality),
                quality(quality) {}

        double radio;
        int quality;
    };

public:
    double mincostToHireWorkers(vector<int> &quality, vector<int> &wage, int K);
    static bool compare(Worker& a, Worker& b)
    {
        return a.radio < b.radio;
    }
};


#endif //LEETCODECLION_SOLUTION857_H
