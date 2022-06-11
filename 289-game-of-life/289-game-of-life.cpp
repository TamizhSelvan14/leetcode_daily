class Solution {
public:
    
    int diagonals(vector<vector<int>>nums,int i,int j,int row,int col){
        int count=0;
        
        
        //see top
        
        if(i-1>=0){
            
            if(nums[i-1][j]==1)
                count++;
            
        }
        
        
        // see bottom
        if(i+1<row){
            
            if(nums[i+1][j]==1)
                count++;
            
        }
        
        //left
        if(j-1>=0){
            
            if(nums[i][j-1]==1)
                count++;
            
        }
        
        //right
        if(j+1<col ){
            
            if(nums[i][j+1]==1)
                count++;
            
        }
        
        // left top diagonal
        if(i-1>=0 and j-1>=0 )
        {
            if(nums[i-1][j-1]==1)
                count++;
            
        }
    
        
        // left bottom diagonal
        if( i+1<row and j-1>=0 ){
            
            if(nums[i+1][j-1]==1)
                count++;
            
        }
    
        
        // right top diagonal
        if(i-1>=0 and  j+1<col)
        {    
            if(nums[i-1][j+1]==1)
                count++;
            
        }
    
    

        // right top diagonal
        if( i+1<row and  j+1<col)
        {   
            if(nums[i+1][j+1]==1)
                count++;
            
        }
    
        
        
        return count;
    }
    
    void gameOfLife(vector<vector<int>>& nums) {
        
        int row=nums.size();
        int col=nums[0].size();
        
        vector<vector<int>> ans=nums;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                int noOfOnes=diagonals(ans,i,j,row,col);
                
                if(nums[i][j]==1){
                    
                    if( noOfOnes < 2){
                        nums[i][j]=0;
                    }else if(noOfOnes== 2 or noOfOnes== 3){
                        nums[i][j]=1;
                    }else if(noOfOnes > 3){
                        nums[i][j]=0;
                    }
                    
                }else{
                        
                        if(noOfOnes==3)
                            nums[i][j]=1;
                     }
                
                
            }
        }
        
       
    }
};