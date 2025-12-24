#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL || head -> next == NULL) return head;
   ListNode* dupli = head;
   ListNode *dupli2 = head -> next;
   while(dupli2 != NULL){
     if(dupli -> val != dupli2 -> val){
        dupli -> next = dupli2;
        dupli = dupli -> next;
     }
     dupli2 = dupli2 -> next;
   }
   dupli -> next = NULL;
   return head;
       }
int main(){

    return 0;
}