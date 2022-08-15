class Solution {
public:
    
    double findDistance(int x1,int y1){
        
        double val1=pow(x1,2);
        double val2=pow(y1,2);
        
        
        double ans=val1+val2;
        
        return (double)sqrt(ans) ;
        
        
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        
        priority_queue<pair<double,int> ,vector<pair<double,int>>,greater<pair<double,int>>> pq;
        
        
        for(int i=0;i<points.size();i++){
            
            double distance=findDistance(points[i][0],points[i][1]);
//             
            // cout<<distance<<" - "<<points[i][0]<<endl;
            
            pq.push({distance,i});
            
        }
        
       vector<vector<int>> ans;
        
        for(int i=0;i<k;i++){
            
            int val=pq.top().second;
            pq.pop();
            ans.push_back({points[val][0],points[val][1]});
            
        }
        
        // while(!pq.empty()){
        //     cout<<pq.top().first<<" "<<pq.top().second<<endl;
        //     pq.pop();
        // }
        // cout<<endl;
        
        
         return ans;
    }
};