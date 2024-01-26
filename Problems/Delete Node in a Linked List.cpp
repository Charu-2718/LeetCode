#include <iostream>
struct ListNode {
      int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};
class Solution{
    public:
    void deleteNode(ListNode* node) {
        ListNode* prev=NULL;
        while(node != NULL && node->next != NULL){
            node->val=node->next->val;
            prev=node;
            node=node->next;
        }
        prev->next=NULL;
        delete (node);
    }
};
int main(){
    ListNode* head=new ListNode(4);
    ListNode* second=new ListNode(5);
    ListNode* third=new ListNode(1);
    ListNode* fourth=new ListNode(9);
    head->next=second;
    second->next=third;
    third->next=fourth;
    Solution s;
    s.deleteNode(second);
    ListNode* temp=head;
    while(temp!=NULL){
        std::cout<<temp->val<<" ";
        temp=temp->next;
    }
    return 0;
}