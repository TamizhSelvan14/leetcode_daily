class Solution {
public:
    
    typedef vector<vector<int>> graph;
    
    graph buildGraph(int numCourses, vector<vector<int>>& prerequisites) {
        graph g(numCourses);
        for (auto p : prerequisites) {
            g[p[1]].push_back(p[0]);
        }
        return g;
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    
       graph adj=buildGraph(numCourses,prerequisites);
        
            
        
        queue<int> q;
        vector<int> indegree(numCourses,0);
        
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        
        for(int i=0;i<numCourses;i++){
            
            if(indegree[i]==0){
                q.push(i);
            }
            
        }
        
        int count=0;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            
            for(auto it:adj[node]){
                indegree[it]--;
                
                if(indegree[it]==0){
                    q.push(it);
                }
            }
            
            
        }
        
        if(count==numCourses)
            return true;
        
        return false;
    }
};