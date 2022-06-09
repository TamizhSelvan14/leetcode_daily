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
    
    void solve(vector<vector<int>> &ans,TreeNode* root,int targetsum,vector<int> &ds){
        
        if(root==NULL)
            return;
        
        ds.push_back(root->val);
            
        if((root->left)==NULL and (root->right)==NULL and targetsum==root->val){
            ans.push_back(ds);
           
           
        }
        
            
        solve(ans,root->left,targetsum-root->val,ds);
            
        solve(ans,root->right,targetsum-root->val,ds);
            
        ds.pop_back();
        
    }
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        solve(ans,root,targetSum,ds);
        
        
        return ans;
        
        
    }
};