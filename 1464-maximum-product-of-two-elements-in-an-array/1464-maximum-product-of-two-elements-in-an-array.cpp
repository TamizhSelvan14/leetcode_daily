class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        int top=pq.top();
        pq.pop();
        
        
        
        return (top-1)*(pq.top()-1);
    }
};