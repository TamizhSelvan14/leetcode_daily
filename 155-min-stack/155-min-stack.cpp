class MinStack {
public:
    
    //stores val and the current min of all
    vector<pair<int,int>> ans;
    
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(ans.size()==0)
            ans.push_back({val,val});
        else{
            
            int minSoFar=ans.back().second;
            
            ans.push_back({val,min(val,minSoFar)});
            
        }
        
        
    }
    
    void pop() {
        ans.pop_back();
    }
    
    int top() {
       return ans.back().first;
    }
    
    int getMin() {
       return ans.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */