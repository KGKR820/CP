#include <iostream>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 bool hasPathSum(TreeNode* root, int targetSum) {
       if(root == nullptr) return false;
       else if((root -> left == nullptr and root -> right == nullptr and root -> val == targetSum)){
           return true;
        }
        else{
            return hasPathSum(root -> left,targetSum-(root-> val)) or hasPathSum(root -> right,targetSum-(root-> val));
        }
    }
int main(){

    return 0;
}