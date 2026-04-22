#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* removeElements(ListNode* head, int val) {
        
        while(head != nullptr && head -> val == val){
            head = head -> next;
        }
        if(head == nullptr){
            return nullptr;
        }
        ListNode *p = head;
        while(p -> next!=nullptr){
            if(p->next ->val == val){
                p -> next = p->next -> next;

            }
           else{
            p= p-> next;
           }
        }
        return head;
    }
int main(){

    return 0;
}