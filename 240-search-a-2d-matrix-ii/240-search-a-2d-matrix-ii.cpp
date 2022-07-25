class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
//         traverse each row and make the binary search
            
//             tc ->  each row->0(m)
//                     binary search->0(logn)
              
//               tc=>0(m logn)
         
        
      int m = mat.size();
        int n = mat[0].size();
       
       for(int i=0;i<m;i++)
       {
           
           //check base condition
           if(mat[i][0]<=target and mat[i][n-1]>=target){
            
                
               
               int low=0;
               int high=n-1;
               
               
               
               while(low<=high){
                   int mid=(low+high)/2;
                   
                   
                   if(mat[i][mid]==target)
                       return true;
                   else if(mat[i][mid]<target){
                       low=mid+1;
                   }else{
                       high=mid-1;
                   }
                   
                   
               }
           }
           
       }        
        
        
        return false;
    }
};