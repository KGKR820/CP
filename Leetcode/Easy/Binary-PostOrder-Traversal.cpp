#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void Traversal(TreeNode *p,vector<int> &output){
    if(p == nullptr) return ;
     Traversal(p -> left,output);
     Traversal(p -> right,output);
     output.push_back(p -> val);

}
 vector<int> postorderTraversal(TreeNode* root) {
    vector<int> output;
        Traversal( root,output);
        return output;
    }
int main(){
cout << "HI";
    return 0;
}
