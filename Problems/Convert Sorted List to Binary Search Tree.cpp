#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        if (head->next == nullptr) {
            return new TreeNode(head->val);
        }

        // Find the middle of the linked list using slow and fast pointers
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Create a new TreeNode with the value of the middle node
        TreeNode* root = new TreeNode(slow->val);

        // Break the linked list into two halves
        prev->next = nullptr;

        // Recursively build the left and right subtrees
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);

        return root;
    }
};

int main() {
    // Example usage:
    // Create a sorted linked list
    ListNode* head = new ListNode(-10);
    head->next = new ListNode(-3);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(9);

    // Create a Solution object
    Solution solution;

    // Convert the sorted linked list to a balanced BST
    TreeNode* root = solution.sortedListToBST(head);

    // Print the values of the tree nodes (in-order traversal)
    std::cout << "In-order traversal of the BST: ";
    printInOrder(root);
    
    return 0;
}

// Helper function to print the in-order traversal of a binary tree
void printInOrder(TreeNode* root) {
    if (root != nullptr) {
        printInOrder(root->left);
        std::cout << root->val << " ";
        printInOrder(root->right);
    }
}
