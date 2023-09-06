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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int cnt = 0;
        ListNode * curr = head;
        while(curr){
            curr=curr->next;++cnt;
        }
        curr=head;
        int y = cnt%k;
        vector<ListNode*>v;
        for(int i=0;i<k;++i){
            ListNode* temp =curr;
            if(temp==NULL){
                v.push_back(NULL);
                continue;
            }
            int j=1;
            // cout<<cnt/k<<endl;
            while(j<cnt/k and temp){
                temp=temp->next;
                ++j;
            }
            if(y>0 and temp and cnt/k !=0 ){
                temp=temp->next;--y;
            }
            v.push_back(curr);
            if(temp)curr=temp->next;
            else curr=NULL;
            if(temp)temp->next=NULL;
            
        }
        return v;
    }
};