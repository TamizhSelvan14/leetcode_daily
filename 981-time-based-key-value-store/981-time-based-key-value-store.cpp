class TimeMap {
public:
    
    unordered_map<string,vector<pair<string,int>>> umap; //value //key
    
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
        umap[key].push_back({value,timestamp});
        
    }
    
    string get(string key, int timestamp) {
        
        string result="";
        
        int start = 0, end = umap[key].size();
        while(start < end) {
            int mid = start + (end-start)/2;
            if(umap[key][mid].second==timestamp){
                result=umap[key][mid].first;
                return result;
            }else if(umap[key][mid].second < timestamp){
                //smaller is also considered as result
                result=umap[key][mid].first;
                start=mid+1;
            }
            else{
                end = mid ;}
        }
        return result;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */