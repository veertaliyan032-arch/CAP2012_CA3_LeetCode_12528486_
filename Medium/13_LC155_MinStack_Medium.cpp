// LeetCode 155 - Min Stack
#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int,int>> st;   // {value, min so far}
public:
    MinStack() {}
    void push(int val) {
        int mn = st.empty() ? val : min(val, st.top().second);
        st.push({val, mn});
    }
    void pop() { st.pop(); }
    int top() { return st.top().first; }
    int getMin() { return st.top().second; }
};
// All operations: O(1), Space: O(n)
