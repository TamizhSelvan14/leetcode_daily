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
    
    bool solve(TreeNode* leftSide,TreeNode* rightSide){
        
        if(leftSide==NULL or rightSide==NULL)
            return (leftSide==rightSide);
        
        
        if(leftSide->val!=rightSide->val)
            return false;
        
        
        //2 cases where we check left side left with right sides right
        // and left side right and right side left
        
        //case1
        bool case1=solve(leftSide->left,rightSide->right);
        //case2
        bool case2=solve(leftSide->right,rightSide->left);
        
        
        return case1 and case2;
        
        
        
    }
    
    
    
    bool isSymmetric(TreeNode* root) {
        
       return solve(root->left ,root->right);
        
        
    }
};