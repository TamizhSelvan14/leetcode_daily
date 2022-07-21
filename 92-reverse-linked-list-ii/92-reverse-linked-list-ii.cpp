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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> ans;
        
        
        ListNode *t=head;
        int count=1;
        while(t!=NULL){
            
            if(count>=left and count<=right){
                ans.push_back(t->val);
                
            }
            
            t=t->next;
            count++;
            
        }
        reverse(ans.begin(),ans.end());
        t=head;
        count=1;
        int i=0;
        while(t!=NULL){
            
            if(count>=left and count<=right){
                t->val=ans[i++];
            }
            
            t=t->next;
            count++;
            
        }
        
        
        return head;
    }
};