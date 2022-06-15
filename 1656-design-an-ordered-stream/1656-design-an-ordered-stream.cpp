class OrderedStream {
public:
    
    vector<string> arr;
    int i=0;
    OrderedStream(int n) {
        vector<string> a(n+1);
        arr=a;
        
    }
    
    vector<string> insert(int idKey, string value) {
        
        arr[idKey-1]=value;
        
        vector<string> ans;
        
        
        while(i<arr.size() and arr[i]!=""){
            ans.push_back(arr[i]);
            i++;
        }
        
        
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */