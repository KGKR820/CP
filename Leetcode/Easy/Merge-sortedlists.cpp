#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *Merge(ListNode *list1,ListNode*list2){
    ListNode *dum = new ListNode();
    ListNode *cur = dum;
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            cur->next = new ListNode(list1->val);
            list1 = list1->next;
        } else {
            cur->next = new ListNode(list2->val);
            list2 = list2->next;
        }
        cur = cur->next;
    }
    while (list1 != nullptr) {
        cur->next = new ListNode(list1->val);
        list1 = list1->next;
        cur = cur->next;
    }
    while (list2 != nullptr) {
        cur->next = new ListNode(list2->val);
        list2 = list2->next;
        cur = cur->next;
    }
    return dum->next;
}

int main(){

    return 0;
}