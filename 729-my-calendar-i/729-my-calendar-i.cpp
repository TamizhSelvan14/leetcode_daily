class MyCalendar {
public:
    map<int,int> umap;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
      auto upper=umap.upper_bound(start);
        
        if(upper!=umap.end() and upper->second<end)
            return false;
      
       umap.insert({end,start});
        
       return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */