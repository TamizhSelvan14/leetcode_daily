class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> uset(nums.begin(),nums.end()); // 0(1) here 

        int maxi=0;
        for(int x:uset){


            if(uset.find(x-1)==uset.end()){ //start the strea


                int y=x+1;
                while(uset.find(y)!=uset.end()){
                    y++;
                }

                 maxi=max(maxi,y-x); // y-x distance
            }

        }


return maxi;

    }
};