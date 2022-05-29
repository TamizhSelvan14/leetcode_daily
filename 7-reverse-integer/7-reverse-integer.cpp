class Solution {
public:
    int reverse(int x) {
        
      //  int c=0;
             long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
 
      
    }
};