#include <iostream>
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count =0;
       ListNode *dummy = head;
       ListNode *p = head;
       while(head!=NULL){
        if(count >n){
           dummy = dummy -> next;
        }
        head = head ->next;
        count++;
       } 
       if(count == n){
        return dummy -> next;
       }
       dummy -> next = dummy -> next -> next;
       return p;
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
removeNthFromEnd(p,2);
print(p);
    return 0;
}
 