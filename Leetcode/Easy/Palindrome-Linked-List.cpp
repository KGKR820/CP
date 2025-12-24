#include <iostream>
#include <stack>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
bool isPalindrome(ListNode* head) {
// vector <int> arr;
// while(head != nullptr){
//     arr.push_back(head -> val);
//     head = head -> next;
// }
// int i =0;
// int j = arr.size()-1;
// while(i<=j){
//   if(arr[i] != arr[j]){
//     return false;
//   }
//   i++;
//   j--;
// }
// return true;
      stack <int> stk;
      if(head == nullptr || head -> next == nullptr ){
        return true;
      }
      stack <int> stk;
      stk.push(head -> val);
      head = head -> next;
      int i=stk.top();
      while(head != nullptr){
         if(stk.top() == head -> val){
            stk.pop();
         }
         else if(i == head -> val){
            stk.pop();
            stk.pop();
         }
         else{
            i = stk.top();
            stk.push(head -> val);
         }
      }
      return stk.empty();
    }