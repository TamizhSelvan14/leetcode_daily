class Solution {
public:
    // bool isVowel(char c)
    // {
    //     return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u' );
    // }


    int maxFreqSum(string s) {
        unordered_map<char,int> umap;
        int maxiV=0;
        int maxiC=0;

        for(auto c:s){
             umap[c]++;
            if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' ){
                maxiV=max(maxiV,umap[c]);
            }else{
                maxiC=max(maxiC,umap[c]);
            }

        }

        return maxiV+maxiC;
    }
};