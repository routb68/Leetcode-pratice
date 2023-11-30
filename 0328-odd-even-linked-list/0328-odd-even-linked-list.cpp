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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
        int cnt=0;
        for(ListNode *curr=head;curr!=NULL ;curr=curr->next){
            if((cnt)%2==0){
                if(es==NULL){
                    es=curr;ee=curr;
                }else{
                    ee->next=curr;ee=ee->next;
                }
            }else{
                if(os==NULL){
                    os=curr;oe=curr;
                }else{
                    oe->next=curr;oe=oe->next;
                }
            }
            ++cnt;
        }
        if(os==NULL or es==NULL) return head;
        ee->next=os;
        oe->next=NULL;
        return es;
    }
};