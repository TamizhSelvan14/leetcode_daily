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
    void solve(TreeNode* root,vector<int> &ans,int level){
        
        if(root==NULL)
            return;
        
        //each level has one right most node so if we get that push to ans
        if(ans.size()<level)
            ans.push_back(root->val);
        
        //move first right at each level
        solve(root->right,ans,level+1);
        solve(root->left,ans,level+1);
        
        
        
    }
    
    
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        
        solve(root,ans,1);
        
        return ans;
    }
};