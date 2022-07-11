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
    void solve(vector<vector<int>> &ans,TreeNode* root){
        if(root==NULL)
            return;
        
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int size=q.size();
            
            
            vector<int> temp;
            
            for(int i=0;i<size;i++){
                
                TreeNode *node=q.front();
                q.pop();
                
                 
                if(node->left) q.push(node->left);
                
                if(node->right) q.push(node->right);
               
                
                temp.push_back(node->val);
                
                
            }
            
            
            ans.push_back(temp);
            
        }
        
        
        
        
        
        
        
       
    }
    
    
    
    
    
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        solve(ans,root);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};