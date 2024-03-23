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
        
           ListNode* temp=head;
        
        stack<ListNode*> st;
        int size=0;
        
        while(temp){
            st.push(temp);
            temp=temp->next;
            size++;
        }
        temp=head;
        for(int i=0;i<size/2;i++){
            
            ListNode* top=st.top();
            st.pop();
                        
            top->next=temp->next;
            temp->next=top;
            temp=temp->next->next;
            
        }
        
               temp->next=NULL;

        // return head;
        
        
    }
};