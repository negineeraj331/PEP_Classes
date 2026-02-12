//Design linked List leetcode 707 question
#include <iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class MyLinkedList {
public:
    ListNode *head;
    MyLinkedList() {
        head = nullptr;
    }
    int get(int index) {
        ListNode *cur = head;
        int i = 0;
        while (cur) {
            if (i == index) {
                return cur->val;
            }
            cur = cur->next;
            i++;
        }
        return -1;
    }
    void addAtHead(int val) {
        ListNode *newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }
    void addAtTail(int val) {
        ListNode *newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            return;
        }
        ListNode *cur = head;
        while (cur->next) {
            cur = cur->next;
        }
        cur->next = newNode;
    }
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        ListNode *newNode = new ListNode(val);
        ListNode *cur = head;
        int i = 0;
        while (cur) {
            if (i == index - 1) {
                newNode->next = cur->next;
                cur->next = newNode;
                return;
            }
            cur = cur->next;
            i++;
        }
    }
    void deleteAtIndex(int index) { 
        if (!head) return;
        if (index == 0) {
            ListNode *toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        ListNode *cur = head;
        int i = 0;
        while (cur->next) {
            if (i == index - 1) {
                ListNode *toDelete = cur->next;
                cur->next = cur->next->next;
                delete toDelete;
                return;
            }
            cur = cur->next;
            i++;
        }
    }
};
int main() {
    MyLinkedList linkedList;
    linkedList.addAtHead(1);
    linkedList.addAtTail(3);
    linkedList.addAtIndex(1, 2); // linked list becomes 1->2->3
    cout << linkedList.get(1) << endl; // returns 2     
    linkedList.deleteAtIndex(1); // now the linked list is 1->3
    cout << linkedList.get(1) << endl; // returns 3
    return 0;
}