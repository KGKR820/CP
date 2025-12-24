#include <iostream>
#include <vector>
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
ListNode* reverseBetween(ListNode* head, int left, int right) {
      int i=1;
      ListNode *p = head,*l,*r;
      std::vector <int> arr;
      while(p != nullptr and i <= right ){
        if(i > left and i < right){
          arr.push_back(p -> val);
        }
        else{
            if(i == left){
            l = p;
            arr.push_back(p -> val);
        }
         if(i == right){
            r =p;
            arr.push_back(p -> val);
        }
        } 
         i++;
         p = p -> next;
      }
      while(l != r){
        l -> val = arr.back();
        arr.pop_back();
        l = l-> next;
      }
      if(!arr.empty()){
        l->val = arr.back();
      }
      return head;
    }
int main(){

    return 0;
}
 