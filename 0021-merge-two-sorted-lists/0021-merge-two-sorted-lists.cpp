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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * temp = list1;
        ListNode* curr = list2;
        ListNode* ans = new ListNode(0);
        ListNode* res = ans;
        while(temp  and curr){
            if(temp->val<=curr->val){
                ans->next = temp;
                temp = temp->next;
            }else{
                ans->next = curr;
                curr = curr->next;
            }
            ans = ans->next;
        }
        if(temp){
            ans->next=temp;
        }
        if(curr){
            ans->next=curr;
        }
        return res->next;
    }
};