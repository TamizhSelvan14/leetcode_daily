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
    
    int height(TreeNode *root){
        
        if(root==NULL)
            return 0;
        
        
        return max(height(root->left),height(root->right))+1;
        
    }
   
    
   void inordertraversal(TreeNode *root,vector<vector<int>> &ans,int level){
       
       if(root==NULL) return;
       
       ans[level].push_back(root->val);
       inordertraversal(root->left,ans,level-1);
       
       inordertraversal(root->right,ans,level-1);
       
   }
    
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       
       int n =height(root);
        
        vector<vector<int>> ans(n,vector<int>{});
        // solve(ans,root);
        inordertraversal(root,ans,n-1);
        
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};