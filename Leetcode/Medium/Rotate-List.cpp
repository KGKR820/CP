#include <iostream>
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* rotateRight(ListNode* head, int k) {
    if(k==0 or head == nullptr){
            return head;
        }
        ListNode *p = head;
        ListNode *tail;
        int i=0;
        while(p!=nullptr){
            i++;
            tail=p;
           p=p->next;
        }
        k = k%i;
        p = head; 
        for(int j=1;j<i-k;j++){
          p  = p -> next;
        }
        if(p->next != nullptr){
            tail-> next = head;
            head = p-> next;
            p->next = nullptr;
        }
        return head;
    }
int main(){

    return 0;
}