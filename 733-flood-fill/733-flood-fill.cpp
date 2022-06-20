class Solution {
public:
    
    void solve(vector<vector<int>> &image,int i,int j,int presentColor,int desiredColor){
        
        
        if(i>=0 and i<image.size() and j>=0 and j<image[0].size() and image[i][j]==presentColor){
            
            if(image[i][j]==desiredColor)
                return;
            
            
            image[i][j]=desiredColor;
         
            
            solve(image,i+1,j,presentColor,desiredColor);
            
            solve(image,i,j+1,presentColor,desiredColor);
            
            solve(image,i-1,j,presentColor,desiredColor);
            
            solve(image,i,j-1,presentColor,desiredColor);
            
            
            
            
        }
    }
    
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
       
        
        int row=image.size();
        int col=image[0].size();
        
        int presentColor=image[sr][sc];
        
        
     solve(image,sr,sc,presentColor,color);
        
        
        
        return image;
    }
};