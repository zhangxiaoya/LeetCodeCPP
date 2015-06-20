#ifndef STACK_H
#define STACK_H

#include <queue>

using namespace std;

class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        int len = que.size();
        que.push(x);
        for(int i =0;i!=len;++i)
        {
            que.push(que.front());
            que.pop();
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        que.pop();
    }

    // Get the top element.
    int top() {
        return que.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return que.empty();
    }
private:
    queue<int> que;
};
#endif // STACK_H


//class Stack {
//public:
//    // Push element x onto stack.
//    void push(int x) {
//        que1.push(x);
//    }

//    // Removes the element on top of the stack.
//    void pop() {
//        while (!que1.empty()) {
//            que2.push(que1.front());
//            que1.pop();
//        }
//        while(que2.size() != 1)
//        {
//            que1.push(que2.front());
//            que2.pop();
//        }
//        que2.pop();
//    }

//    // Get the top element.
//    int top() {
//        while (!que1.empty()) {
//            que2.push(que1.front());
//            que1.pop();
//        }
//        if(!que2.empty())
//            return que2.back();
//    }

//    // Return whether the stack is empty.
//    bool empty() {
//        return (que1.empty() && que2.empty());
//    }
//private:
//    queue<int> que1,que2;
//};
//#endif // STACK_H
