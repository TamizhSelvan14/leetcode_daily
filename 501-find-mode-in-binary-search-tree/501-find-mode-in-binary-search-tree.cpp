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
    void inorder(TreeNode *root, unordered_map<int,int> &umap,int &maxi){
        
        
        if(root==NULL)
            return ;
        
        
        inorder(root->left,umap,maxi);
       
        umap[root->val]++;
         maxi=max(maxi,umap[root->val]);
        inorder(root->right,umap,maxi);
        
      
        
        
    }
    
    
    vector<int> findMode(TreeNode* root) {
       
       unordered_map<int,int> umap;
        int maxi=0;
        
        vector<int> ans;
        
       
        
        inorder(root,umap,maxi);
        
         for(auto x:umap)
        {
            if(x.second==maxi)
                ans.push_back(x.first);
        }
        
       return ans;
    }
};