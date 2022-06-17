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
    
    int has_camera=2;
    int not_having_camera=0;
    int camera_not_needed=1;
    
    int ans=0;
    
    
    int dfs(TreeNode*root){
        if (!root) return camera_not_needed;
        
        
        int left=dfs(root->left);
        int right=dfs(root->right);
        
        if(left==not_having_camera || right==not_having_camera)
        {
            ans++;
            return has_camera;
        }else if(left==has_camera || right==has_camera)
            return camera_not_needed;
        else
            return not_having_camera;
            
        
        
    }
    
    
    int minCameraCover(TreeNode* root) {
        
        if(dfs(root)==not_having_camera)
            ans++;
        
        return ans;
        
        
    }
};