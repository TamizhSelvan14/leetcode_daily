class TimeMap {
public:
unordered_map<string,vector<pair<int,string>>> umap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        
        umap[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        
        //time limit exceeded 
        // string lowest="";
        // for(auto x:umap[key]){
        //     if(x.first==timestamp){
        //         return x.second;
        //     }else if(x.first<timestamp){
        //         lowest=x.second;
        //     }
        // }
        // return lowest;

        //lets use binary search so that minimum value will be retained
        int start=0;
        int end=umap[key].size();
       string res="";
        while(start<end){

            int mid=(start+end)/2;

            if(umap[key][mid].first==timestamp){
                return umap[key][mid].second;
            }else if(umap[key][mid].first<timestamp){//get lowest
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