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
    
    
    bool traverse(TreeNode *root,long mini,long maxi){
        
        if(!root)
            return true;
        
        
        if( root->val >=maxi ){
            return false;
        }
        
        if(root->val <= mini){
            return false;
        }
        
       return traverse(root->left,mini,root->val)
               and
        traverse(root->right,root->val,maxi);
        
        
       
    }
    
    
    bool isValidBST(TreeNode* root) {
        
        if(root==NULL)
            return false;
        
        
        return traverse(root,LONG_MIN,LONG_MAX);
        
        
    }
};