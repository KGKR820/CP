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
     output.push_back(p -> val);
     Traversal(p -> left,output);
     Traversal(p -> right,output);

}
 vector<int> preorderTraversal(TreeNode* root) {
    vector<int> output;
        Traversal( root,output);
        return output;
    }
int main(){

    return 0;
}