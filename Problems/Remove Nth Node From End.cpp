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
    int length_of_list(ListNode* head){
        int length=0;
        while(head != nullptr){
            length++;
            head=head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k = length_of_list(head);
        if(k==n){
            ListNode* temp =head->next;
            delete(head);
            return temp;
        }
        int pos= k-n;
        ListNode* prev=nullptr;
        ListNode* temp = head;
        while(pos--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        delete(temp);
        return head;
    }
};