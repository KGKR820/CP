#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
bool hasCycle(ListNode *head) {
    ListNode *slow = head,*fast= head;
     while(fast != nullptr and fast -> next != nullptr){
         slow = slow -> next;
         fast = fast->next->next;
         if(slow == fast){
            return true;
         }
         
     }
     return false;
    }
int main(){

    return 0;
}