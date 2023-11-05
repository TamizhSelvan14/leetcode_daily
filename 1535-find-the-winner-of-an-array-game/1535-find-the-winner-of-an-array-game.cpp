class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        unordered_map<int,int> umap;//store win count
        
        if(k>=arr.size())
        {
            return *max_element(arr.begin(),arr.end());
        }
        
        
        list<int> lst;
        
        for(int i=0;i<arr.size();i++){
            lst.push_back(arr[i]);
        }
        
        
        while(true){
            
            int first=lst.front();
            lst.pop_front();
            int second=lst.front();
            lst.pop_front();
            
            if(first>second){
                
                umap[first]++;
                
                if(umap[first]>=k){
                    return first;
                }
                lst.push_front(first);
                lst.push_back(second);
                
                
                
                
            }else{
                umap[second]++;
                
                if(umap[second]>=k){
                    return second;
                }
                lst.push_front(second);
                lst.push_back(first);
                
            }
            
            
            
        }
        
        
        
        
        return 0;
    }
};