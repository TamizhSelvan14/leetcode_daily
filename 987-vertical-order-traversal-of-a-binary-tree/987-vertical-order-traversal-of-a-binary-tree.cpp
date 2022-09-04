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

    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        
        //vertical -> level,value 
        map<int, map<int,multiset<int>>> umap;
       
        // node->(verticalside,level)
        queue<pair<TreeNode*,pair<int,int>>> q;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            
            auto temp=q.front();
            q.pop();
            
            
            TreeNode *node=temp.first;
            
            int x=temp.second.first;
            int y=temp.second.second;
            
            umap[x][y].insert(node->val);
            
            if(node->left){
                q.push({node->left,{x-1,y+1}});
            }
            
            
            if(node->right){
                q.push({node->right,{x+1,y+1}});
            }
            
            
            
        }
        
        
        vector<vector<int>> ans;
        
        
        for(auto x:umap){
            
            auto temp=x.second;
            vector<int> arr;
            for(auto t:temp){
                arr.insert(arr.end(),t.second.begin(),t.second.end());             
            }
            
            ans.push_back(arr);
        }
        return ans;
    }
};