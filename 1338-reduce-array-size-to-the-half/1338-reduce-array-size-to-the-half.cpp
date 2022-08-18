class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        map<int,int> umap;
        set<int> st;
        
        int total=0;
        
        for(auto x:arr){
            umap[x]++;
            total++;
        }
        
        int count=0;
        
        
        vector<int> ans;
        
        for(auto x:umap)
            ans.push_back(x.second);
        
        
       
        
        sort(ans.begin(),ans.end());
        
        int curr=0;
        
        for(int i=ans.size()-1;i>=0;i--){
            
            if(ans[i]+curr < (total/2)){
                curr+=ans[i];
                count++;
            }else{
                return count+1;
            }
            
            
        }
        
        
        
        
        
        return count;
        
    }
};