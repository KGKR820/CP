#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *deleteMiddle(ListNode *head) {
  ListNode *slow = head;
  ListNode *fast = head;
  if (slow->next == nullptr) {
    return nullptr;
  }
  fast = fast->next->next;
  while (fast != nullptr && fast->next != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  slow->next = slow->next->next;
  return head;
}
