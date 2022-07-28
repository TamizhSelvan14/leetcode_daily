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
    //level order traversal
    int bfs(TreeNode *root){
        
        if(root==NULL)
            return 0;
        
        int ans=0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        
        
        while(!q.empty()){
            
            ans++;
            int n=q.size();
            
            for(int i=0;i<n;i++){
                TreeNode *node=q.front();
                q.pop();
                
                if(node->left)
                    q.push(node->left);
                
                
                if(node->right)
                    q.push(node->right);
                
                
            }
                
            
        }
        
        
        return ans;
    } 
    
    
    
    
    
    int maxDepth(TreeNode* root) {
        
//         if(root==NULL)
//             return 0;
        
//         int left=maxDepth(root->left);
//         int right=maxDepth(root->right);
        
        
//         return max(left,right)+1;
        
        return bfs(root);
        
    }
};