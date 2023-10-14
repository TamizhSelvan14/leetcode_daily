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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int size=1;
        
        ListNode *tail=head;
        
        
        while(tail->next!=NULL){
            size++;
            tail=tail->next;
        }
        
        
        //formula for new start index
        int newHead=size- k % size;

        tail->next=head;//make cirle
        
        for(int i=0;i<newHead;i++){
            
           tail=tail->next;
            
            
        }
        
        head=tail->next;
        tail->next=NULL;
        
        
        return head;
    }
};