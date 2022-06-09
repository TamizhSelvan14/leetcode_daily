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
    int ans=0;
    TreeNode* bstToGst(TreeNode* root) {
        
        
        if(root==NULL)
            return NULL;
        
        
        if(root->right!=NULL) 
            bstToGst(root->right);
        
        
        //imp analyze and see if we we can see the trre node val starts at right most node so start from there
        root->val+=ans;
        ans=root->val;
        
        
        if(root->left!=NULL) 
            bstToGst(root->left);
        
        
        
        return root;
    }
};