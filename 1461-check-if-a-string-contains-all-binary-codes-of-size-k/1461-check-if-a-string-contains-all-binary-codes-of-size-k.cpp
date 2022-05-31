class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> hset;
        int n=s.size();
        
        for(int i=0;i<=n-k;i++){
            
            
            string str=s.substr(i,k);
            
            hset.insert(str);
            
        }
        
        
        // for(auto x:hset)
        //     cout<<x<<" ";
        
        
//         check hash has 2^k values else return false 
            
//             2^k is simpley (1<<k)
        
        return hset.size()==(1<<k) ;
    }
};