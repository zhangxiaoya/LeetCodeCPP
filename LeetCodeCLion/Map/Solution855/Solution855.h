//
// Created by runisys on 18-6-28.
//

#ifndef LEETCODECLION_SOLUTION855_H
#define LEETCODECLION_SOLUTION855_H

#include <map>

using std::map;


class ExamRoom
{
    int n;
    map<int, int> seats;
public:
    ExamRoom(int N);

    int seat();

    void leave(int p);
};


#endif //LEETCODECLION_SOLUTION855_H
