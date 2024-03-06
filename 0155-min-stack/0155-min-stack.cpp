class MinStack {
public:
    
    //store incoming int and recent min
    vector<pair<int,int>> arr;
    
    
    MinStack() {
        
    }
    
    void push(int val) {
        
        if(arr.size()==0){
            arr.push_back({val,val});
            
        }else{
            
            int minSoFar=arr.back().second;
            
            arr.push_back({val,min(val,minSoFar)});
            
        }
        
    }
    
    void pop() {
        arr.pop_back();
    }
    
    int top() {
        return arr.back().first;
    }
    
    int getMin() {
        return arr.back().second;
       
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