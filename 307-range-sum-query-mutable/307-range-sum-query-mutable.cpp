class NumArray {
public:
    
    vector<int> segment_tree;
     
     inline static int n=0;
    
    NumArray(vector<int>& nums) {
        n=nums.size();
       
        segment_tree.resize(4*n);
        
        build_segment(0,0,n-1,nums);
        
    }
    
    void build_segment(int index,int low,int high,vector<int> &nums){
        
        if(low==high)
        {
            segment_tree[index]=nums[low];
            return;
        }
        
        int mid=(low+high)/2;
        //left
        build_segment(2*index+1,low,mid,nums);
        //right
        build_segment(2*index+2,mid+1,high,nums);
        
        //backtrack
        segment_tree[index]=segment_tree[2*index+1]+segment_tree[2*index+2];
    }
    
    //for update again we gonna do same build tree
    
    void update(int index, int val,int segIndex=0,int start=0,int end=n-1) {
         if(start==end){
            segment_tree[segIndex]=val;
            return;
         }else{
            
            int mid=(start+end)/2;
            
            //if index<mid move left
            
            if(index<=mid){
                update(index,val,2*segIndex+1,start,mid);
            }else{
                    update(index,val,2*segIndex+2,mid+1,end);
                
            }
         
            segment_tree[segIndex]=segment_tree[2*segIndex+1]+segment_tree[2*segIndex+2];
            
        }
    }
    
    int sumRange(int left, int right,int index=0,int low=0,int high=n-1) {
        
        if(low>=left and high<=right)
            return segment_tree[index];
        
        if(high<left or low>right)
            return 0;
        
        int mid=(low+high)/2;
        
        int leftside=sumRange(left,min(mid,right),2*index+1,low,mid);
        
        int rightside=sumRange(max(left,mid+1),right,2*index+2,mid+1,high);
        
        
        return leftside+rightside;
        
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */