class Solution {
public:
    int pivotInteger(int n) {
     vector<int> prefix(n);
        vector<int> suffix(n);
        
        int pre=1;
        int suff=n;
        int j=n-1;
        
        for(int i=1;i<n;i++){
       
           
            prefix[i-1]=pre;
            suffix[j]=suff;
            // cout<<prefix[i-1]<<" - "<<suffix[j]<<endl;

            pre+=(i+1);
            suff+=j;
            j--;

        }
        
        for(int i=0;i<n;i++){
            // cout<<prefix[i]<<" - "<<suffix[i]<<endl;
            
            if(prefix[i]==suffix[i])
                return i+1;
        }
        
        
     
        return -1;
    }
};