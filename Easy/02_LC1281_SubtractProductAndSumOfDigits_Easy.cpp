// LeetCode 1281 - Subtract the Product and Sum of Digits of an Integer
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1, sum = 0;
        while (n > 0) {
            int d = n % 10;
            prod *= d;
            sum += d;
            n /= 10;
        }
        return prod - sum;
    }
};
// Time: O(log n), Space: O(1)
