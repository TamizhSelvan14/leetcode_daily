class Solution {
public:
    
    int ans(int ind){
        
       // cout<<1<<endl;  
        if(ind<=0)
            return 0;
        else if(ind==1 or ind==2)
            return 1;
        
      
        
        int a=0,b=0;
        if(ind%2==0){
            a=ans(ind/2);
            
        }else{
             b=ans(ind/2)+ans(ind-(ind/2));
        }
       
        return max(a,b);
        
    }
    
    int getMaximumGenerated(int n) {
        
 int maxi=0;
        for(int i=0;i<=n;i++){
         maxi=max(maxi,ans(i));   
        }
        return maxi;
    }
};