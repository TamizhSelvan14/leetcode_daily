class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suff(n);
        vector<int> ans(n);

        int preSum=1;
        int sufSum=1;

        int j=n-1;

        for(int i=0;i<n;i++){
            preSum*=nums[i];

            pre[i]=preSum;

            sufSum*=nums[j];

            suff[j]=sufSum;

            j--;

        }

        ans[0]=suff[0];
        ans[n-1]=pre[n-2];


        for(int i=1;i<n-1;i++){
            ans[i]=pre[i-1] * suff [i+1];
        }

        return ans;
    }
};