class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int maxi=0;
        sort(arr.begin(),arr.end());
        
        if(arr[0]!=1 and arr[0]>1)
             arr[0]=1;
       
        maxi=max(maxi,arr[0]);
        
        for(int i=1;i<arr.size();i++){
            
            if(abs(arr[i]-arr[i-1])<=1){
                maxi=max(maxi,arr[i]);
            }else{
                arr[i]=arr[i-1]+1;
                maxi=max(maxi,arr[i]);
            }
            
        }
        
        
        return maxi;
    }
};