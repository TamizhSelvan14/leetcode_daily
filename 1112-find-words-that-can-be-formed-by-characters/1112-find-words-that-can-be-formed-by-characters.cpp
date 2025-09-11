class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> umap;
int ans=0;
        for(auto x:chars){
            umap[x]++;
        }

        for(int i=0;i<words.size();i++){
            cout<<words[i]<<endl;
            int start=0;
            int end=words[i].size()-1;
            int valid=true;
            unordered_map<char,int> umap2; //freq count
            while(start<=end){  

                    if((umap.find(words[i][start]) == umap.end())
                            or
                        umap.find(words[i][end]) == umap.end()){
                                valid= false;
                                break;
                    }

                if(start!=end){
                     umap2[words[i][start]]++;
                    umap2[words[i][end]]++;
                }else{
                                         umap2[words[i][start]]++;

                }
                   


                    start++;end--;


            }   

            for(auto x:umap2){
                if(umap[x.first] < x.second ){
                    cout<<"char "<<x.first<<"val "<<x.second<<endl;
                    valid=false;
                    break;
                }
            }


            if(valid){
              ans+=words[i].size();
            }

        }

    return ans;
    }
};