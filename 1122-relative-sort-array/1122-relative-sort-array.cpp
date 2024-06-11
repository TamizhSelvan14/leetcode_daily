class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> umap;//collect freq
        vector<int> ans;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            umap[arr1[i]]++;
        }
        
        
         for(int i=0;i<arr2.size();i++){
            
             while(umap[arr2[i]]>0){
                 ans.push_back(arr2[i]);
                  umap[arr2[i]]--;
             }
             
           
        }
        
         for(int i=0;i<arr1.size();i++){
               while(umap[arr1[i]]>0){
                 ans.push_back(arr1[i]);
                  umap[arr1[i]]--;
             }
             
        }
     return ans;   
    }
};