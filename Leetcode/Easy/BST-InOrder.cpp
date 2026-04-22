#include <iostream>
#include <vector>
#include <stack>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 class Solution{
    public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> out;
    stack<TreeNode*> stk;
    TreeNode * curr = root;
    while(curr != nullptr or !stk.empty()){
       while(curr != nullptr){
        stk.push(curr);
        curr = curr -> left;
       }
       curr = stk.top();
       out.push_back(curr -> val);
       stk.pop();
       curr = curr -> right;
    }
    return out;
}
 };


int main(){
TreeNode * root = new TreeNode(1);
root -> right = new TreeNode(2);
root -> right -> left = new TreeNode(3);
Solution sol;
vector <int> out = sol.inorderTraversal(root);
for(int in:out){
    cout << in << " ";
}
    return 0;
}