class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        //assigning the row as col size because while transpose the size will change alternatively
        vector<vector<int>> ans(m,vector<int>(n));
        
       for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=matrix[j][i];
            }
        }
        
        
        return ans;
    }
};