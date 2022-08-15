class KthLargest {
public:
    
    priority_queue<int,vector<int>,greater<int>> pq;
    int pick=0;
    
    KthLargest(int k, vector<int>& nums) {
        pick=k;
        
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        
       while(pq.size()>pick){
           pq.pop();
       }
        
        
    }
    
    int add(int val) {
        
        pq.push(val);
        
        while(pq.size()>pick){
            pq.pop();
        }
        
        
      return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */