class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        
        
        cout<<sum<<" "<<k<<endl;
        
        if(sum<=k){
            
            if(k%sum==0)
                return 0;

            sum=(k%sum);
            
        }else{
                
        sum=k;
              
        }
        
      
        for(int i=0;i<chalk.size();i++){
            
            if(sum>=chalk[i]){
                sum-=chalk[i];
            }else{
                return i;
            }
            
        }
        
        
        
        return sum;
    }
};