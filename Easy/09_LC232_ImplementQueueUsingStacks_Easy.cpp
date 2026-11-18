// LeetCode 232 - Implement Queue using Stacks
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> in, out;
    void transfer() {
        if (out.empty()) {
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
    }
public:
    MyQueue() {}
    void push(int x) { in.push(x); }
    int pop() {
        transfer();
        int v = out.top();
        out.pop();
        return v;
    }
    int peek() {
        transfer();
        return out.top();
    }
    bool empty() { return in.empty() && out.empty(); }
};
// push: O(1), pop/peek: amortized O(1), Space: O(n)
