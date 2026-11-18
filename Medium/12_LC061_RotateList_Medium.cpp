// LeetCode 61 - Rotate List
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        int len = 1;
        ListNode* tail = head;
        while (tail->next) { tail = tail->next; len++; }
        k %= len;
        if (k == 0) return head;
        tail->next = head;                 // make circular
        ListNode* newTail = head;
        for (int i = 0; i < len - k - 1; i++) newTail = newTail->next;
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};
// Time: O(n), Space: O(1)
