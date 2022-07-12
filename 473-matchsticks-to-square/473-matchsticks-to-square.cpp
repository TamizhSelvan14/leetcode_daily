class Solution {
public:
    
    bool solve(vector<int>& stick,int i,int a,int b,int c,int d){
        
        
        if(i==stick.size()){
            
            return a==b && b==c and c==d;
        }
        
        
        
        if(stick[i]<=a)
            if(solve(stick,i+1,a-stick[i],b,c,d))
                return true;
        
        
        if(stick[i]<=b)
            if(solve(stick,i+1,a,b-stick[i],c,d))
                return true;
        
        
        if(stick[i]<=c)
            if(solve(stick,i+1,a,b,c-stick[i],d))
                return true;
        
        
        
        if(stick[i]<=d)
            if(solve(stick,i+1,a,b,c,d-stick[i]))
                return true;
        
        
        
        
        
        
        
        
        return false;
        
        
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
       
        int totalSum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        
        // if not possible
        if(totalSum%4!=0) return false;
        
        
//         split the total sum and provide each and make backtrack and see ifall becoming zero then we get a square
        
        int onePart=totalSum/4;
        
        //this is needed to reduce the time complexity as the greater elements picked first then the calls will be lesser
        sort(matchsticks.rbegin(),matchsticks.rend());
        
        return solve(matchsticks,0,onePart,onePart,onePart,onePart);
        
        
        
        
        
    }
};