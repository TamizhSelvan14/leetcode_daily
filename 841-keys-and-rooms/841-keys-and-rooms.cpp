class Solution {
public:
    
    void dfs(vector<vector<int>> &rooms,vector<int> &visited,int src){
        
        visited[src]=1;
        
        
        for(auto x:rooms[src]){
            
            if(visited[x]!=1){
                visited[x]=1;
                dfs(rooms,visited,x);
            }
        }
        
    }
    
    
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> visited(rooms.size(),0);
        
        
//         queue<int> q;
        
//         q.push(0);
        
//         visited[0]=1;
//         while(!q.empty()){
            
//             int node=q.front();
//             q.pop();
            
            
//             for(auto x:rooms[node])
//             {
                
//                 if(visited[x]!=1){
//                     q.push(x);
//                     visited[x]=1;
//                 }
//             }
//         }
        
       
        dfs(rooms,visited,0);
        
        for(int i=0;i<visited.size();i++)
          if(visited[i]==0)
              return false;
        
        // cout<<endl;
        return true;
    }
};