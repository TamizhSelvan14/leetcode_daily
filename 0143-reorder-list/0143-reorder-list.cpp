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
    void reorderList(ListNode* head) {
        
        //push all nodes into stack and traverse half the size of loop 
        
        stack<ListNode*> st;
        
        ListNode* t=head;
        int size=0;
        while(t){
            st.push(t);
            size++;
            t=t->next;
        }
        
        t=head;
        
        for(int i=0;i<size/2;i++){
            
            ListNode* node=st.top();
            st.pop();
            
           node->next=t->next;
            t->next=node;
            t=t->next->next;
            
            
        }
        
    
       t->next=NULL;
        
        
    }
};