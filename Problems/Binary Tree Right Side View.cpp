 #include <iostream>
#include <vector>
#include <queue>

using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
   vector<int> rightSideView(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int> ans;

        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int n = que.size();
            TreeNode* node = NULL;
            while(n--){
                node = que.front();
                que.pop();

                if(node -> left != NULL){
                    que.push(node -> left);
                }

                if(node -> right != NULL){
                    que.push(node -> right);
                }                
            }
            ans.push_back(node -> val);
        }
        return ans;
    }
int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> right = new TreeNode(5);
    root -> right -> right = new TreeNode(4);
    vector<int> ans = rightSideView(root);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}