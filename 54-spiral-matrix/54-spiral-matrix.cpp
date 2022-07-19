class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int rows=matrix.size();
        int cols=matrix[0].size();
        
        vector<int>  ans;
        
        
        int top=0;
        int bottom=rows-1;
        int left=0;
        int right=cols-1;
        
       while(top<=bottom and left<=right){ 
        // -->
        int r=left;
        while(r<=right){
            ans.push_back(matrix[top][r++]);
        }
        
        top++;
        
        // downwards 
        int d=top;
        while(d<=bottom)
        {
            ans.push_back(matrix[d++][right]);
        }
        
        right--;
        
        
        //leftwards
        if(top<=bottom){   
                
                    int l=right;

                while(l>=left){
                    ans.push_back(matrix[bottom][l--]);

                }
        }
        bottom--;
        
        //upwards
        
         if(left<=right){  

                int u=bottom;

                while(u>=top){
                    ans.push_back(matrix[u--][left]);
                }
         }
        
        left++;
        }
        
        // cout<<top<<" "<<bottom<<" "<<left<<" "<<right; 
        return ans;
    }
};