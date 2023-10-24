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
    
    void bfs(TreeNode* root,vector<int> &ans){
        
        if(root==NULL)
            return;
        
        queue<TreeNode*> q;
        
        q.push(root);
        int maxi=INT_MIN;
        while(!q.empty()){
            
            int size=q.size();
            maxi=INT_MIN;
            for(int i=0;i<size;i++){
                
                TreeNode* node=q.front();
                maxi=max(maxi,node->val);

                q.pop();
                
                if(node->left){
                    q.push(node->left);
                }
                
                 if(node->right){
                    q.push(node->right);
                }
                
                
                
            }
            
            ans.push_back(maxi);
            
        }
        
        
        
    }
    
    
    
    vector<int> largestValues(TreeNode* root) {
        
        vector<int> ans;
        
        bfs(root,ans);
        
        return ans;
        
        
    }
};