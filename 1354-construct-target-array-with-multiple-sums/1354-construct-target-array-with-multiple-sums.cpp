class Solution {
public:
    bool isPossible(vector<int>& target) {
        
        
        if(target.size()==1)
            return (target[0]==1);
        
        priority_queue<int> pq;
        long long sum=0;
        for(auto x:target)
         { 
            
            pq.push(x);
            sum+=x;
        }
        
        
        while(pq.top()!=1){
            
        long long curr = pq.top();
            pq.pop();
            
		if (sum - curr == 1) 
            return true;

		long long x = curr % (sum - curr);
		sum = sum - curr + x;

		if (x == 0 || x == curr) 
            return false;
		else 
            pq.push(x);
                    
        }
        
        
        
        return true;
    }
};