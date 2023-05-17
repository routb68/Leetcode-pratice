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
    int pairSum(ListNode* head) {
        int ans =INT_MIN;
        ListNode *temp=head;
        int n=0;
        while(temp){
            ++n;
            temp=temp->next;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;
        int idx=0;
        while(idx<n/2){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            ++idx;
        }
        for(int i=0;i<n/2;++i){
            ans = max(ans,prev->val+curr->val);
            curr=curr->next;
            prev=prev->next;
        }
        return ans;
    }
};