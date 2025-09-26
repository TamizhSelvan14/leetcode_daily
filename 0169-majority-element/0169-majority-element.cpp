class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();

        if(n==1)
        return nums[0];

        int cap=n/2;
                    cout<<" cap "<<cap<<endl;

        int i=0;
    sort(nums.begin(),nums.end());

        while(i<n){

            int tempCount=1;
            cout<<" i "<<nums[i]<<endl;

            i++;
            while(i<n and nums[i-1]==nums[i]){
                tempCount++;
                if(tempCount>cap)
                   return nums[i];
                i++;
            }
                    cout<<" tempCount "<<tempCount<<endl;

            


        }

        return 0;
    }
};