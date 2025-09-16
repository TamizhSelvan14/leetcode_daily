class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int i=0;
        int j=matrix[0].size()-1;

        

        while(i<n and j>=0){
            int mid=matrix[i][j];

            if(mid==target)
                return true;
            else if(mid<target){
                i++;
            }else{
                j--;
            }    

        }

        return false;
    }
};