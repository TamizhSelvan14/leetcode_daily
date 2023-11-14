class Solution {
public:
    int countPalindromicSubsequence(string s) {

        int maxi=0;
        vector<pair<int,int>> arr (26, {-1, -1} );
        
        for(int i=0;i<s.size();i++){
            
            if(arr[s[i]-'a'].first==-1)
                arr[s[i]-'a'].first=i;//first occurence

            arr[s[i]-'a'].second=i;//last occurence
        }
        
        for(int i=0;i<arr.size();i++){
            if(arr[i].first<arr[i].second){
                maxi+=unordered_set<char>(begin(s) + arr[i].first + 1, begin(s) + arr[i].second).size();
            }
        }
        
   
        
        return maxi;
    }
};