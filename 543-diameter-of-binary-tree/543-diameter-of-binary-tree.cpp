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
    
    int height(TreeNode* root){
        
        if(root==NULL)
            return 0;
        
        
        int left=height(root->left);
        int right=height(root->right);
        
        
        return max(left,right)+1;
        
    }
   int optimized(TreeNode *root,int &ans){
       
       if(root==NULL)
           return 0;
       
       int left=optimized(root->left,ans);
       int right=optimized(root->right,ans);
       
       ans=max(ans,(left+right));
       
       
       return max(left,right)+1;
       
   }
    
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
     
        int maxi=0;
        optimized(root,maxi);
        
        
//         int left=diameterOfBinaryTree(root->left);
//         int right=diameterOfBinaryTree(root->right);
        
//         maxi=max(maxi,(left+right));
        
//         diameterOfBinaryTree(root->left);
//         diameterOfBinaryTree(root->right);
        
        
        return maxi;
    }
};