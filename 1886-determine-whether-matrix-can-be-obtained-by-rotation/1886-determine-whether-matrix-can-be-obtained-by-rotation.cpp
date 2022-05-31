class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     
        int n=mat.size();
       
        if(mat==target)
            return true;
        
//         3 degrees
//             1st turn right -> 90 degree
//             2ndt turn right -> 180 degree
//             3rd turn right -> 270 degree
            
        
        
        int degree=3; //where 1= 90 ,2=180,3=270 not checking 360 because 360 is already a target we are checking at first
        

        while(degree--){
            
            //transpose of a matrix rows become columns and vice versa
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){

                    swap(mat[i][j],mat[j][i]);

                }
            }
            
            for(int i=0;i<n;i++)
                reverse(mat[i].begin(),mat[i].end());
            
            //if mat == target at any rotation return true
            if(mat==target)
                return true;
            
        }
        
        
        
       return false; 
    }
};