class Solution {
public:
    void dfs(vector<vector<int>> &image,int i,int j,int sourceColor,int colorChange){
        
        
        if(i<0 or j<0 or i>=image.size() or j>=image[0].size() or image[i][j]!=sourceColor or image[i][j]==colorChange){
            return;
        }
        
          image[i][j]=colorChange;
        
        
        //directions
        dfs(image,i+1,j,sourceColor,colorChange);
        
        dfs(image,i,j+1,sourceColor,colorChange);
        
        dfs(image,i-1,j,sourceColor,colorChange);

        dfs(image,i,j-1,sourceColor,colorChange);
     
        
        
    }
    
    
    void bfs(vector<vector<int>> &image,int i,int j,int sourceColor,int colorChange){
        
        queue<pair<int,int>>q;
        q.push({i,j});
        
        
        
        while(!q.empty()){
            
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            
            if(a<0 or b<0 or a>=image.size() or b>=image[0].size() or image[a][b]!=sourceColor or image[a][b]==colorChange){
            continue;
        }
            
            image[a][b]=colorChange;
            
            q.push({a+1,b});
            q.push({a,b+1});
            q.push({a-1,b});
            q.push({a,b-1});
            
            
        }
    }
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    
        
        int sourceColor=image[sr][sc];
        
        
        
        // dfs(image,sr,sc,sourceColor,color);
        bfs(image,sr,sc,sourceColor,color);
        
        return image;
    }
};