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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp and temp->next){
            int pre = temp->val,aft= temp->next->val;
            ListNode* curr=temp->next;
            ListNode* var =new  ListNode(__gcd(pre,aft));
            temp->next= var;
            var->next=curr;
            temp=curr;
        }
        return head;
    }
};