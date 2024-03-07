/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       unordered_map<Node* ,Node* > umap;
        
        Node* temp=head;
        while(temp){
            umap[temp]=new Node(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        
        while(temp){
           
            Node *node=umap[temp];
            node->next=umap[temp->next];
            node->random=umap[temp->random];
            temp=temp->next;
            
        }
        
       return umap[head];
        
    }
};