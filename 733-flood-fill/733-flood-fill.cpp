class Solution {
public:
    void solve(vector<vector<int>> &image,int i,int j,int sourceColor,int colorChange){
        
        
        if(i<0 or j<0 or i>=image.size() or j>=image[0].size() or image[i][j]!=sourceColor or image[i][j]==colorChange){
            return;
        }
        
        
       
        
        
          image[i][j]=colorChange;
        
        
        //directions
        solve(image,i+1,j,sourceColor,colorChange);
        
        solve(image,i,j+1,sourceColor,colorChange);
        
        solve(image,i-1,j,sourceColor,colorChange);
        
        solve(image,i,j-1,sourceColor,colorChange);
     
        
        
    }
    
    
    
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    
        
        int sourceColor=image[sr][sc];
        
        
        
        solve(image,sr,sc,sourceColor,color);
        
        
        return image;
    }
};