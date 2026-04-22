#include <iostream>
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* swapPairs(ListNode*head){
    ListNode *output = head;
    while(head != NULL and head -> next!= NULL){
        int temp = head -> val;
        head -> val = (head -> next) -> val;
        head -> next -> val = temp;
        head = head -> next -> next;
    }
    return output;
}
void print(ListNode *p){
    while(p != nullptr){
       std::cout << p->val << "->";
       p = p->next;
    }
    std::cout << nullptr;
}
int main(){
ListNode *head = new ListNode(1);
ListNode * p = head;
head -> next = new ListNode(2);
head = head -> next;
head -> next = new ListNode(3);
head = head -> next;
head -> next = new ListNode(4);
head = head -> next;
head -> next = new ListNode(5);
ListNode * output =swapPairs(p);
print(output);
    return 0;
}
 