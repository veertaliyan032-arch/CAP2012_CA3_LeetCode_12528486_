// LeetCode 32 - Longest Valid Parentheses
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int best = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '(') st.push(i);
            else {
                st.pop();
                if (st.empty()) st.push(i);
                else best = max(best, i - st.top());
            }
        }
        return best;
    }
};
// Time: O(n), Space: O(n)
