class Solution {
public:
    
    vector<int> original;
     vector<int> shuff;
    Solution(vector<int>& nums) {
        
        original=nums;
        shuff=nums;
    }
    
    vector<int> reset() {
        return original;
    }
    
    vector<int> shuffle() {
       
       int n=shuff.size();
        
        int x=rand()%n;
        int y=rand()%n;
        
        swap(shuff[x],shuff[y]);
        
        return shuff;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */