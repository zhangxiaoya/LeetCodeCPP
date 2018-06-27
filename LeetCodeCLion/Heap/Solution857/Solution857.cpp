//
// Created by runisys on 18-6-27.
//

#include "Solution857.h"
#include <queue>
#include <algorithm>
#include <limits>

double Solution857::mincostToHireWorkers(vector<int> &quality, vector<int> &wage, int K)
{
    vector<Worker> workers;
    for (int i = 0; i < quality.size(); ++i)
    {
        workers.push_back(Worker(wage[i], quality[i]));
    }
    std::sort(workers.begin(), workers.end(), this->compare);
    double res = std::numeric_limits<double>::max();
    int quality_sum = 0;
    std::priority_queue<int> priority_q;
    for (auto work : workers)
    {
        priority_q.push(work.quality);
        quality_sum += work.quality;

        if (priority_q.size() > K)
        {
            quality_sum -= priority_q.top();
            priority_q.pop();
        }
        if (priority_q.size() == K)
            res = std::min(res, quality_sum * work.radio);
    }
    return res;
}