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
    ListNode* doubleIt(ListNode* head) {
        ListNode* ans;
        if(head->val>4){
            ans = new ListNode(1);
            ans->next = head;
        }else{
            ans = head;
        }
        for( auto x = head;x;x=x->next){
            x->val = (x->val+x->val) %10 + (x->next and x->next->val>4);
        }
        return ans;
    }
};