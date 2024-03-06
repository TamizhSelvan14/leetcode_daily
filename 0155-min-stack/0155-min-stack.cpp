class MinStack {
public:
    stack<int> st;
    stack<int> st1;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        
        int mini=INT_MAX;
        st1=st;
        while(!st1.empty()){
            mini=min(mini,st1.top());
            st1.pop();
        }
        st1=st;
        
        return mini;
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