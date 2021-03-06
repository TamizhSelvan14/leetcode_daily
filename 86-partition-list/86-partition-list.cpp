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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *left=new ListNode(0),*right=new ListNode(0);
        
        ListNode *p=left,*q=right;
        
        while(head!=NULL){
            
            if(head->val<x){
            
                p->next=head;
                p=p->next;
                
            }else{
                q->next=head;
                q=q->next;
            
            }
            
            head=head->next;
            
        }
        // cout<<p->next;
        p->next=right->next;
        q->next=NULL;
        
        return left->next;
    }
};