class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        
        int n=security.size();
        
        vector<int> nonIncrease (n);
        vector<int> nonDecrease (n);
        fill(nonIncrease.begin(), nonIncrease.end(), 0);
        fill(nonDecrease.begin(), nonDecrease.end(), 0);
        
        for(int i=1;i<n;i++){
            if(security[i]<=security[i-1]){
                nonIncrease[i]=nonIncrease[i-1]+1;
            }
        }
        
         for(int i=n-2;i>=0;i--){
            if(security[i]<=security[i+1]){
               nonDecrease[i]=nonDecrease[i+1]+1;
            }
        }
        
        
//         for(auto x:nonIncrease)
//             cout<<x<<" ";
        
//         cout<<endl;
        
//         for(auto x:nonDecrease)
//             cout<<x<<" ";
        
//         cout<<endl;
        
        
        vector<int> ans;
        
        for(int i=0;i<n;i++){
            if(nonIncrease[i]>=time and nonDecrease[i]>=time){
                ans.push_back(i);
            }
        }
        
        
        
        return ans;
        
    }
};