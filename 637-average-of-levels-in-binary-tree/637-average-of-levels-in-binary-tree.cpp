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
    
    int height(TreeNode *root){
        
        if(root==NULL)
            return 0;
        
        int left=height(root->left);
        int right=height(root->right);
        
    return max(left,right)+1;        
        
    }
    
    
    vector<double> averageOfLevels(TreeNode* root) {
 
        
        vector<double> ans;
        
     
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            
           int size=q.size();
            
            double value=0.0;
            
            for(int i=0;i<size;i++){
                
                TreeNode *node=q.front();
                value+=node->val;
                q.pop();
                if(node->left)
                    q.push(node->left);
                
                if(node->right)
                    q.push(node->right);
                
            }
            
            ans.push_back(value/(double)size);
            
            
        }
        
        
        
        
        return ans;
    }
};