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
    bool hasPathSum(TreeNode* root, int targetsum) {
      
        
        if(root==NULL)
            return false;
        
        
        if(root->right==NULL and root->left==NULL and targetsum==root->val){
            return true;
        }
        
        
        bool leftSide=hasPathSum(root->left,targetsum-root->val);
        bool rightSide=hasPathSum(root->right,targetsum-root->val);
        
        
        //if either any side has path return true else return false;
        return leftSide or rightSide;
        
        
      
    }
};