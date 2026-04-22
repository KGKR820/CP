#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
ListNode* reverseList(ListNode* head) {
        ListNode *p = nullptr;
        while(head != nullptr){
            ListNode * temp = head ->next;
            head -> next = p;
            p = head;
            head = temp;
        }
        return p;
    }