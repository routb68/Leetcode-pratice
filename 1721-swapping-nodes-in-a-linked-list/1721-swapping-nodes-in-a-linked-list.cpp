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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        for(int i=1;i<k;++i){
            curr=curr->next;
        }
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            ++n;
        }
        temp=head;
        for(int i=1;i<n-k+1;++i){
            temp=temp->next;
        }
        n=temp->val;
        temp->val=curr->val;
        curr->val=n;
        return head;
    }
};