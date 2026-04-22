#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode * out = new ListNode();
       ListNode * output = out;
       int carry = 0;
       while(l1 != nullptr or l2 != nullptr or carry){
        int sum = carry;
        if(l1 != nullptr){
           sum += l1-> val;
           l1= l1-> next;
        }
        if(l2 != nullptr){
           sum += l2-> val;
          l2= l2-> next;

        }
        carry = sum / 10;
        sum = sum % 10;
        out -> next = new ListNode(sum);
        out = out -> next;
       } 
    return output-> next;
}
    int main(){

        return 0;
    }