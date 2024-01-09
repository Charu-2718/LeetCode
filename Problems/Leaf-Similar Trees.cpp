class Solution {
public:
    void findLeaf(TreeNode* root, vector<int>& arr) {

        if (!root->left && !root->right) {
            arr.push_back(root->val);
            return;
        }

        if (root->left)
            findLeaf(root->left, arr);
        if (root->right)
            findLeaf(root->right, arr);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1, arr2;
        findLeaf(root1, arr1);
        findLeaf(root2, arr2);

        if (arr1.size() != arr2.size()) return false;
        
        for(int i = 0; i < arr1.size(); i++)
            if (arr1[i] != arr2[i]) return false;
        
        return true;
    }
};