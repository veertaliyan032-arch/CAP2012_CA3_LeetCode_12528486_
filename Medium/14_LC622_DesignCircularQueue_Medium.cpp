// LeetCode 622 - Design Circular Queue
#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
    vector<int> data;
    int head, count, cap;
public:
    MyCircularQueue(int k) : data(k), head(0), count(0), cap(k) {}
    bool enQueue(int value) {
        if (isFull()) return false;
        data[(head + count) % cap] = value;
        count++;
        return true;
    }
    bool deQueue() {
        if (isEmpty()) return false;
        head = (head + 1) % cap;
        count--;
        return true;
    }
    int Front() { return isEmpty() ? -1 : data[head]; }
    int Rear() { return isEmpty() ? -1 : data[(head + count - 1) % cap]; }
    bool isEmpty() { return count == 0; }
    bool isFull() { return count == cap; }
};
// All operations: O(1), Space: O(k)
