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
    void reorderList(ListNode* head) {
        if(head->next==nullptr or head->next->next==nullptr) return;
        stack<ListNode*>s;
        int n=0;
        ListNode* curr=head;
        while(curr){
            s.push(curr);
            ++n;
            curr=curr->next;
        }
        curr=head;
        for(int i=0;i<n/2;++i){
            ListNode* temp=s.top();
            s.pop();
            temp->next=curr->next;
            curr->next=temp;
            curr=curr->next->next;
        }
        curr->next=nullptr;
    }
};