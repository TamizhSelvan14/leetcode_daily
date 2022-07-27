/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
     
        if(root==NULL)
            return "#,";
        
        
       return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
        
    }
    
    
    //helper function
    TreeNode *formTree(queue<string> &q){
        
       string s=q.front();
        q.pop();
        
        if(s=="#")
            return NULL;
        
        
        TreeNode *root=new TreeNode(stoi(s));
        
        root->left=formTree(q);
        root->right=formTree(q);
        
        return root;
        
        
    }
    
    
    

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
    
        
        //push int queue to make tree better
        queue<string> q;
        
        string temp="";
        for(int i=0;i<data.size();i++){
            
            if(data[i]!=','){
                temp+=data[i];
            }else{
                q.push(temp);
                temp="";
                
            }
            
            
        }
        cout<<data<<endl;
        // cout<<q.size()<<endl;
        
        if(temp.size()!=0)
            q.push(temp);
    
        cout<<q.size();
       
        return formTree(q);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));