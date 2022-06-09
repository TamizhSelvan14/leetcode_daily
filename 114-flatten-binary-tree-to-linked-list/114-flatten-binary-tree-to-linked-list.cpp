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
    
    //extra Node to merge
    
    TreeNode *prev=NULL;
    
    void flatten(TreeNode* root) {
        if(root==nullptr)
            return;
        
        //the approach is when we reach the last node fro there we gonna make the tree
        
        flatten(root->right);
        flatten(root->left);
        
        
        root->right=prev;
        root->left=NULL;
        
        prev=root;
        
    }
};