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
bool help(TreeNode *left, TreeNode *right) {
  if (left == nullptr and right == nullptr) {
    return true;
  }
  if (left->val != right->val) {
    return false;
  }

  return (help(left->left, right->right) && help(left->right, right->left));
}
bool isSymmetric(TreeNode *root) { return help(root->left, root->right); }
