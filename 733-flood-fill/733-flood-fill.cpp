class Solution {
public:
    void dfs(vector<vector<int>>&image,int sr,int sc,int row,int col,int newColor,int orgColor){
        
        
        //check boundaries
        if(sr<0 || sc<0 || sr>=row || sc>=col)
            return;
        else if(image[sr][sc]!=orgColor)
            return;
        
        
        
        
        //traverse all sides
        image[sr][sc]=newColor;
        
        
        dfs(image,sr+1,sc,row,col,newColor,orgColor);
        
        dfs(image,sr,sc+1,row,col,newColor,orgColor);
        
        dfs(image,sr-1,sc,row,col,newColor,orgColor);
        
        dfs(image,sr,sc-1,row,col,newColor,orgColor);
        
       
         
        
        // return;
    }
    
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        //if its already in same color return the graph
        if(image[sr][sc]==newColor)
            return image;
        
        
        int row=size(image);
        int col=size(image[0]);
        int orgColor=image[sr][sc];
        
        
        dfs(image,sr,sc,row,col,newColor,orgColor);
        
        
        return image;
        
        
        
    }
};