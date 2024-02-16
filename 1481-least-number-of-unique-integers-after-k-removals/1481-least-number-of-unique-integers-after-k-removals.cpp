class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    
        unordered_map<int,int> umap;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(int i=0;i<arr.size();i++){
            umap[arr[i]]++;
        }
        
        for(auto x:umap){
            pq.push({x.second,x.first});
        }
        while(k>0){
            
            int val=pq.top().first;
            int ele=pq.top().second;
            
            pq.pop();
            // cout<<pq.size()<<endl;

            
            if(val<=k){
                k-=val;
            }else{
                
                val-=k;
                    k=0;
                pq.push({val,ele});
            }
            
            // if(val>0){
            //     
            // }
            
            
        }
        
        // for(auto x:pq){
        //     cout<<"pq val is "<<x.second<<" freq "<<x.first<<endl;
        // }
        
        return pq.size();
        
    }
};