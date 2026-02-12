//reorder list leetcode 143 question
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
    void reorderList(ListNode* head) {
        if (!head || !head->next) {
            return;
        }
        // Step 1: Find the middle of the list
        ListNode *slow = head;
        ListNode *fast = head;  
        ListNode *prev = nullptr;
        while (fast && fast->next) {
            fast = fast->next->next;
            ListNode *next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }   
        // Step 2: Merge the two halves
        ListNode *first = prev; // First half (reversed)
        ListNode *second = slow; // Second half
        while (first && second) {
            ListNode *temp1 = first->next;
            ListNode *temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    solution.reorderList(head);

    cout << "Reordered list: ";
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}   