class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
      vector<int> ans;
        //if odd
        if (changed.size()%2== 1) 
            return ans;
        
        sort(changed.begin(), changed.end());
        
        map<int, int> mp;
        for (auto x:changed) {
            mp[x]++;
        }
        
        for (auto x:changed) {
            
          if (mp[x] == 0) 
              continue;
          
            if (mp[x * 2] == 0) 
                return {};
            
          ans.push_back(x);
          mp[x]--;
          mp[x * 2]--;
        }
        return ans;
        
    }
};