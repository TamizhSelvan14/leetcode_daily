class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        //note first and last position of the map
        unordered_map<char,int> umap2;

    for(int i=0;i<s.size();i++){
        umap2[s[i]]=i;
    }



    int start=0;

    while(start<s.size()){
        int maxi=-1;
        int end=umap2[s[start]];
        for(int i=start;i<end;i++){

            if(umap2.find(s[i])!=umap2.end() && umap2[s[i]]>end){
                end=umap2[s[i]];
            }


        }

        maxi=(end-start)+1;
        start=end+1;

        ans.push_back(maxi);

    }


return ans;
    }
};