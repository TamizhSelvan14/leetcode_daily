class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr(numRows,vector<int>(numRows,1));
        
        
        for(int i=1;i<=numRows;i++)
        {
            arr[i-1].resize(i);
        }
        
        for(int i=1;i<arr.size();i++){
            for(int j=1;j<arr[i].size()-1;j++){
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
        
        return arr;
    }
};