//Rotate List leetcode 61 question
#include <iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) {
            return head;
        }
        ListNode *cur = head;
        int length = 1;
        while (cur->next) {
            cur = cur->next;
            length++;
        }
        cur->next = head; // Connect the last node to the head to make it circular
        k = k % length; // Handle cases where k is greater than length
        int stepsToNewHead = length - k;
        ListNode *newTail = cur;
        while (stepsToNewHead--) {
            newTail = newTail->next;
        }
        ListNode *newHead = newTail->next;
        newTail->next = nullptr; // Break the circular link
        return newHead;
    }
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    Solution solution;
    ListNode* newHead = solution.rotateRight(head, 2);
    while (newHead) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    return 0;
}