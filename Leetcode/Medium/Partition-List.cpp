#include <iostream>
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* partition(ListNode* head, int x) {
    ListNode *before = new ListNode(0);
    ListNode *beforeHead = before;
    ListNode *after = new ListNode(0);
    ListNode *afterHead = after;

    while (head != nullptr) {
        if (head->val < x) {
            before->next = head;
            before = before->next;
        } else {
            after->next = head;
            after = after->next;
        }
        head = head->next;
    }

    after->next = nullptr;
    before->next = afterHead->next;

    return beforeHead->next;
    }
int main(){

    return 0;
}