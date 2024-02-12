class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> umap;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
        umap[key].push_back({timestamp,value});

    }
    
    string get(string key, int timestamp) {

       // vector<pair<int,string>> t=umap[key];
        string res="";
        int start=0;
        int end=umap[key].size();
        
        while(start<end){
            
            int mid= start + (end-start)/2;
            
            if(umap[key][mid].first==timestamp){
                
                res=umap[key][mid].second;
                return res;
                
            }else if (umap[key][mid].first<timestamp){//need lowest as well
                res=umap[key][mid].second;
                start=mid+1;
                
            }else{
               
                 end=mid;
            }
            
            
        }
        
    return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */