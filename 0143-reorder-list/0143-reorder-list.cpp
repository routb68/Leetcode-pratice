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
        deque<int>dq;
        ListNode* curr=head;
        int a=0;
        while(curr){
            dq.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr){
            int x;
            if(a%2==0){
                x=dq.front();
                dq.pop_front();
            }else{
                x=dq.back();
                dq.pop_back();
            }
            curr->val=x;
            ++a;
            curr=curr->next;
        }
        
    }
};