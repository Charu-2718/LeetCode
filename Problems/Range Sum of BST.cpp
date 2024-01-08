// class Solution {
// public:
//     int rangeSumBST(TreeNode* root, int low, int high) {
//         if (!root) {
//             return 0;
//         }
        
//         int currentVal = (root->val >= low && root->val <= high) ? root->val : 0;
        
//         int leftSum = rangeSumBST(root->left, low, high);
//         int rightSum = rangeSumBST(root->right, low, high);
        
//         return currentVal + leftSum + rightSum;
//     }
// };

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == nullptr) {
            return 0;
        }
        
        if (root->val >= L && root->val <= R) {
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        } else if (root->val < L) {
            return rangeSumBST(root->right, L, R);
        } else {
            return rangeSumBST(root->left, L, R);
        }
    }
}; 
