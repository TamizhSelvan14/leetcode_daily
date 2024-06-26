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
    
    int solve(TreeNode* root,int ans){
        
        if(root==nullptr)
            return 0;
        
                     ans= (ans* 10) + root->val ;

        if(!root -> left && !root -> right)           // leaf node - return current number to be added to total sum
            return ans;
        

        return solve(root->left,ans) + solve(root->right,ans);
        
            
    }
    
    
    int sumNumbers(TreeNode* root) {
        
       return solve(root,0);
        
        
    }
};