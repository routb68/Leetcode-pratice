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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        vector<int>ans;
        int ma=-1;
        for(int i=v.size()-1;i>=0;--i){
            if(ma<= v[i]){
                ans.push_back(v[i]);
            }
            ma=max(v[i],ma);
        }
        ListNode* l = new ListNode(0);
        ListNode* curr =l;
        for(int i=ans.size()-1;i>-1;--i){
            curr->next= new ListNode(ans[i]);
            curr=curr->next;
        } 
        return l->next;
    }
};