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
    //using preorder
    void solve(TreeNode *root,unordered_map<int,int> &umap,int &ans){
        
        if(root==NULL)
            return;
        umap[root->val]++;
        
        if(root->left==NULL and root->right==NULL){
         
            int odds=0;
        for(auto x:umap){
           
            
            if(x.second%2==1)
                odds++;
            
            
        }
        
        if(odds<=1)
            ans++;
        
        }
        
        solve(root->left,umap,ans);
        solve(root->right,umap,ans);
        
        umap[root->val]--;
    }
    
    
    int pseudoPalindromicPaths (TreeNode* root) {
       
        //map to store the value of the path and its frequencies to check that palindrome
        unordered_map<int,int> umap;
        
        int ans=0;
        solve(root,umap,ans);
        
        return ans;
        
        
    }
};