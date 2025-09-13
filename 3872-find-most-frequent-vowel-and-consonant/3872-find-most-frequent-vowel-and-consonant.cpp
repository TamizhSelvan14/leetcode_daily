class Solution {
public:
    bool isVowel(char c)
    {
        return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u' );
    }


    int maxFreqSum(string s) {
        unordered_map<char,int> umap;
        int maxiV=0;
        int maxiC=0;

        for(auto x:s){
             umap[x]++;
            if(isVowel(x)){
                maxiV=max(maxiV,umap[x]);
            }else{
                maxiC=max(maxiC,umap[x]);
            }

        }

        return maxiV+maxiC;
    }
};