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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int p_sum=0;
        unordered_map<int, ListNode*> mp;

        ListNode* dummy_node = new ListNode(0);
        dummy_node->next = head;

        mp[0] = dummy_node;

        while(head != nullptr){
            p_sum += head->val;
            if(mp.find(p_sum) != mp.end()){

                ListNode* start = mp[p_sum];
                ListNode* temp= start;
                int p= p_sum;
                while(temp != head){
                    temp= temp->next;
                    p+=temp->val;
                    if(temp!=head){
                        mp.erase(p);
                    }
                    start->next = head->next;
                }

            }else{

                mp[p_sum] = head;
                  
            }
            head=head->next;
        }

        return dummy_node->next;
    }
};