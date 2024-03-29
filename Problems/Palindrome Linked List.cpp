/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>st;
        while(head != nullptr){
            st.push_back(head->val);
            head= head->next;
        }
        int n= st.size();
        
        if(n==1){
            return true;
        }
        for(int i = 0 ; i < n/2 ;i++){
            if(st[i] != st[n-i-1]){
                return false ;
            }
        }
        return true;
    }
};