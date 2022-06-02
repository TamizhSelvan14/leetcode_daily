class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> ans(n,0);
        
      int temp=1;
            int i=0;
            while(candies!=0){
      
                    if( (temp) <candies){
                        ans[i%n]+=temp;
                        candies-=temp;
                        // cout<<temp<<" ";
                        temp++;
                        i++;
                    }else{
                        ans[i%n]+=candies;
                        candies=0;
                        i++;
                    }
                
        }
        
        
        return ans;
    }
};