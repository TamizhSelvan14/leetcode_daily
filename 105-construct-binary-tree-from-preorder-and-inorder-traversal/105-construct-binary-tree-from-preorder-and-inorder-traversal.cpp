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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> umap;
        for(int i=0;i<inorder.size();i++)
            umap[inorder[i]]=i;
        
        
        TreeNode *root=build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,umap);
        
        return root;
    }
    
    TreeNode *build(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend,map<int,int>&umap){
        
        if(prestart>preend or instart>inend)
            return NULL;
        
        TreeNode *node=new TreeNode(preorder[prestart]);
        
        int inroot=umap[node->val];
        int numleft=inroot-instart;
        
        node->left=build(preorder,prestart+1,preend,inorder,instart,inroot-1,umap);
        
        
      node->right=build(preorder,prestart+numleft+1,preend,inorder,inroot+1,inend,umap);  
        
        
        
        return node;
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
};