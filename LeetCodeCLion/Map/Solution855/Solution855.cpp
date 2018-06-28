//
// Created by runisys on 18-6-28.
//

#include "Solution855.h"

ExamRoom::ExamRoom(int N)
{
    n = N;
}

int ExamRoom::seat()
{
    if (seats.empty())
    {
        seats[0] = 0;
        return 0;
    }
    int maxDiss = 0;
    int maxDissRight = 0;

    for (auto seat:seats)
    {
        if ((seat.second + 1) / 2 > (maxDiss + 1) / 2)
        {
            maxDiss = seat.second;
            maxDissRight = seat.first;
        }
    }
    if (seats.begin()->first != 0 && seats.rbegin()->first != n - 1)
    {
        int maxEage = std::max(seats.begin()->first, n - 1 - seats.rbegin()->first);
        if (maxEage > (maxDiss+1) / 2 && seats.begin()->first >= n - 1 - seats.rbegin()->first)
        {
            seats.begin()->second -= 1;
            seats[0] = 0;
            return 0;
        }
        else if (maxEage > (maxDiss+1) / 2 && seats.begin()->first < n - 1 - seats.rbegin()->first)
        {
            int dis = n - 1 - seats.rbegin()->first - 1;
            seats[n - 1] = dis;
            return n - 1;
        }

    }
    else if (seats.rbegin()->first != n - 1)
    {
        if (n - 1 - seats.rbegin()->first > (maxDiss+1) / 2)
        {
            int dis = n - 1 - seats.rbegin()->first - 1;
            seats[n - 1] = dis;
            return n - 1;
        }
    }
    else if (seats.begin()->first != 0)
    {
        if (seats.begin()->first > (maxDiss+1)/ 2)
        {
            seats.begin()->second -= 1;
            seats[0] = 0;
            return 0;
        }
    }

    int left = maxDissRight - maxDiss - 1;
    int mid = left + (maxDiss + 1) / 2;
    seats[mid] = mid - left - 1;
    seats[maxDissRight] = maxDissRight - mid - 1;
    return mid;
}

void ExamRoom::leave(int p)
{
    for (auto it = seats.begin(); it != seats.end();)
    {
        if (it->first == p)
        {
            int currentDis = it->second;
            it = seats.erase(it);
            if (it != seats.end())
                it->second += (currentDis + 1);
            break;
        }
        else
            ++it;
    }
}