class Solution {
public:
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {

        int last = n % 10;

        sum += last;

        n /= 10;
    }
    return sum;
}
    int countLargestGroup(int n) {


        //map to have integer frequecy along with sum 
        unordered_map<int,int> umap;


        //to calculate the map with largest size and its frequency
        unordered_map<int,int> umap2;
        int maxi=0;

        for (int i=1;i<=n;i++){
            int curr=sumOfDigits(i);

            umap[curr]++;

        maxi=max(maxi,umap[curr]);

        }

    int ans=0;
        for(auto x:umap){
            if(x.second==maxi){
                ans++;
            }

        }

       return ans;
    }
};