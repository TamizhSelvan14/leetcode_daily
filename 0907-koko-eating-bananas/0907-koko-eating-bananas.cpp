class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int start=1;
        int end=maxi;

        while(start<end){
            int mid=(start+end)/2;
            int count=0;
            for(auto x:piles)
                count+=(x+mid-1)/mid;


            if(count<=h)
                end=mid;
            else
                start=mid+1;



        }
        

    return start;
    }
};