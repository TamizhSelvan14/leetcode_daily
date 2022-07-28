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
    
    int bfs(TreeNode *root){
        
        queue<TreeNode*>q;
        q.push(root);
        
        int ans=0;
        
        while(!q.empty()){
        
            ans++;
            int size=q.size();
            
            for(int i=0;i<size;i++){
                
                
                TreeNode *node=q.front();
                q.pop();
                       //condition
                if(node->left==NULL  and node->right==NULL)
                    {return ans;}
                
                    if(node->left){
                        q.push(node->left);
                    }
                
                    if(node->right){
                        q.push(node->right);
                    }
                
                
            }
            
            
        }
        
        return -1;
    }
    
    
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        
//         if(root->left!=NULL and root->right!=NULL)
//             return min(minDepth(root->left),minDepth(root->right))+1;
//         else
//            return max(minDepth(root->left),minDepth(root->right))+1;
        
    
    return bfs(root);
    
    }
};