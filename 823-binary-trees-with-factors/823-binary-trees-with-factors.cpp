class Solution {
public:
     int MOD = 1e9 + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        long ans=0;
        sort(arr.begin(),arr.end());
        unordered_map<int,long> rootWithCount;
        
        for(int i=0;i<arr.size();i++)
        {
            long currentAns = 1;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j])
                    continue;
                
                int a = arr[i]/arr[j];
                int b = arr[j];
                
                currentAns = (currentAns + rootWithCount[a]*rootWithCount[b]%MOD)%MOD;
            }
            rootWithCount[arr[i]] = currentAns;
            ans += currentAns;
        }
        return ans%MOD;
    }
};