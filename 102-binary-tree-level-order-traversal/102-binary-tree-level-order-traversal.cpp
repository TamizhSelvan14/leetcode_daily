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
    
    //recursive
    void solve(vector<vector<int>> &ans,TreeNode *root,int level){
        if(root==NULL) return;
        
        if(ans.size()==level) ans.push_back(vector<int>());
        
        ans[level].push_back(root->val);
        
        solve(ans,root->left,level+1);
        solve(ans,root->right,level+1);
        
    }
    
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        
        if(root==NULL)
            return ans;
        
//         queue<TreeNode*> q;
//         q.push(root);
        
//         while(!q.empty()){
            
            
//             int size=q.size();
           
//             vector<int> temp;
//             for(int i=0;i<size;i++){
//                  TreeNode *node=q.front();
//                   q.pop();
                
//                 temp.push_back(node->val);
                
//                 if(node->left)
//                     q.push(node->left);
                
//                 if(node->right)
//                     q.push(node->right);
                
                
//             }
            
            
            
//             ans.push_back(temp);
            
//         }
        
        
        
        solve(ans,root,0);
        
        return ans;
    }
};