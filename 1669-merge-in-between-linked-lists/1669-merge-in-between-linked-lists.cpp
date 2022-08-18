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
    ListNode* mergeInBetween(ListNode* ls1, int a, int b, ListNode* ls2) {
        ListNode* curr=ls1;
        for(int i=1;i<a;++i){
            curr=curr->next;
        }
        ListNode* temp=curr;
        for(int i=a;i<=b;++i){
            temp=temp->next;
        }
        curr->next=ls2;
        while (curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp->next;
        return ls1;
    }
};