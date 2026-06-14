#include <bits/stdc++.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
int pairSum(ListNode *head) {
  ListNode *slow = head;
  ListNode *fast = head;
  ListNode *newhead = nullptr;
  ListNode *next;
  fast = fast->next->next;

  // Find Mid Node
  while (fast != nullptr) {
    slow = slow->next;
    fast = fast->next->next;
  }
  slow = slow->next;

  // Reverse after mid node
  while (slow != nullptr) {
    next = slow->next;
    slow->next = newhead;
    newhead = slow;
    slow = next;
  }

  // Find max Twin sum
  int mx = 0;
  while (newhead != nullptr) {
    mx = max(newhead->val + head->val, mx);
    newhead = newhead->next;
    head = head->next;
  }
  return mx;
}
