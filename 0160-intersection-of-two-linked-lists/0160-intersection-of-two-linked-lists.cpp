/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==headB) return headA;
        int a =0,b=0;
        ListNode* a1=headA,*a2=headB;
        while(a1){
            ++a;a1=a1->next;
        }
        while(a2){
            ++b;a2=a2->next;
        }
        a1=headA,a2=headB;
        if(a>b){
            int c= a-b;
            while(c--){
                a1=a1->next;
            }
        }else{
            int c = b-a;
            while(c--){
                a2=a2->next;
            }
        }
        while(a1->next!=NULL and a1!=a2){
            a1=a1->next;a2=a2->next;
        }
        if(a1==a2)return a1;
        return NULL;
    }
};