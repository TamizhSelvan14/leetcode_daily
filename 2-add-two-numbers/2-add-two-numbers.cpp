class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        //creating node front of the list to return the ans with dummy->next;
        ListNode *dummy=new ListNode();
        
        
        //temp pointer to traverse
        ListNode *temp=dummy;
        
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int sum=0;// to add the sum of each nodes
            
            
            //adding the first list node val
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            
            //adding the second lis t node 
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            
            //adding the carry to move forward         
            sum+=carry;
    
            carry=sum/10; // extra val than 10 addding to the next;
            
            //creating the node with added value
            ListNode *node=new ListNode(sum%10);
            
            temp->next=node;
            temp=node;
            
            
            
        }
        
        
        return dummy->next;
        
        
    }
};