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
    
    int count(TreeNode* root,int &ans,int maxi){
     
        if(root==NULL)
            return ans;
       
        
       if(root->val>=maxi){
           maxi=root->val;
           ans++;
       }
        
        count(root->left,ans,max(maxi,root->val));
        count(root->right,ans,max(maxi,root->val));
        
        
        return ans;
    }
    
    int goodNodes(TreeNode* root) {
        int ans=0;
        count(root,ans,root->val);
        return ans;
    }
};