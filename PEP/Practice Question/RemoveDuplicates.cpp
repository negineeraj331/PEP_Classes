//Remove duplicates from sorted list leetcode 82 question
#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode* deleteDuplicates(ListNode* head) {
    if (!head) return nullptr;

    ListNode* current = head;
    while (current->next) {
      if (current->val == current->next->val) {
        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;
      } else {
        current = current->next;
      }
    }
    return head;
  }
};
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);

    Solution solution;
    ListNode* newHead = solution.deleteDuplicates(head);

    cout << "List after removing duplicates: ";
    while (newHead) {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }
    cout << endl;

    return 0;
}