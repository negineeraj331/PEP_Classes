//Partition List leetcode 86 question
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
    ListNode* partition(ListNode* head, int x) {
        ListNode *beforeHead = new ListNode(0);
        ListNode *before = beforeHead;
        ListNode *afterHead = new ListNode(0);
        ListNode *after = afterHead;    
        while (head) {
            if (head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }
        after->next = nullptr; // Terminate the after list
        before->next = afterHead->next; // Connect before list to after list
        return beforeHead->next;
    }
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);
    Solution solution;
    ListNode* newHead = solution.partition(head, 3);
    while (newHead) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    return 0;
}