class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        
//         while(n){
//             count+=(n&1);//return 1 if & is 1&1 so count increments
//             n=n>>1;//moves the counted bit out
//         }
        
        count=__builtin_popcount(n);
        
        
        return count;
    }
};