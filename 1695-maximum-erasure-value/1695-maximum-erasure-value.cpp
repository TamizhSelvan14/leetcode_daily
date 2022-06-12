class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        
        set<int> s;
        
        int curr=0;
        int maxi=0;
      int l = 0;
        for (int num : nums) {
            
            //reduciing the window from the last till we do not get the repeated value
          while(s.find(num) != s.end()) {
              //reducing the windwo from first
                curr  -= nums[l];
                s.erase(nums[l]);
              l += 1;
            }
            curr += num;
            s.insert(num);
            maxi= max(maxi, curr);
        }
        
        return maxi;
    }
};