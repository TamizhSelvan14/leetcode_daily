/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool levelOrder(TreeNode* root){
        
        int level=0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int size=q.size();
            int prev=0;
            for(int i=0;i<size;i++){
                 TreeNode* node=q.front();
                 q.pop();
                
                if(level%2==0 ){
                    
                    if((prev!=0 and node->val<= prev) or (node->val %2==0) ){
                        
                        return false;
                        
                    }
                    
                    
                }else {
                    
                    if((prev!=0 and node->val>= prev) or (node->val %2!=0)){
                        
                        return false;
                        
                    }
                    
                    
                }
                
            
                if(node->left!=NULL)
                    q.push(node->left);

                 if(node->right!=NULL)
                    q.push(node->right);
                
                
                
                prev=node->val;
                
            }
            
            
            level++;
           
            
            
            
        }
        
        
        
        
        return true;
    }
    
    
    bool isEvenOddTree(TreeNode* root) {
        
        //level order
        return levelOrder(root);
        
    }
};