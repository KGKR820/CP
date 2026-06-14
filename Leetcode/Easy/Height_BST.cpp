#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
// int height(TreeNode *root) {
//   if (root == nullptr) {
//     return 0;
//   }
//   return 1 + max(height(root->left), height(root->right));
// }
// bool isBalanced(TreeNode *root) {
//   if (root == nullptr) {
//     return true;
//   }
//   if (abs(height(root->left) - height(root->right)) >= 2) {
//     return false;
//   }
//   return isBalanced(root->left) and isBalanced(root->right);
// }
//
int check(TreeNode *root) {
  if (root == nullptr)
    return 0;
  int L_Height = check(root->left);
  int R_Height = check(root->right);
  if (L_Height == -1 or R_Height == -1 or abs(L_Height - R_Height) > 1) {
    return -1;
  }
  return max(L_Height, R_Height) + 1;
}

bool isBalanced(TreeNode *root) {
  if (root == nullptr)
    return true;
  if (check(root) == -1)
    return false;
  return true;
}
