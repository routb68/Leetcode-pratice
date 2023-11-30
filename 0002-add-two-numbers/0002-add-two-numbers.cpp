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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans= new ListNode(0);
        ListNode *temp=ans;
        int rem=0;
        while(l1!=NULL or l2!=NULL){
            int a =0,b=0;
            if(l1){
                a=l1->val;l1=l1->next;
            }if(l2){
                b=l2->val;l2=l2->next;
            }
            // cout<<a<<" "<<b<<endl;
            rem+=a;rem+=b;
            temp->next= new ListNode(rem%10);
            rem/=10;
            temp = temp->next;
        }
        while(rem){
            temp->next= new ListNode(rem%10);
            rem/=10;
            temp = temp->next;
        }
        return ans->next;
    }
};