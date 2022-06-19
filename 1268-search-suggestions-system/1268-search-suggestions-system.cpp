class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        string s="";
        
        sort(products.begin(),products.end());
        
        for(int i=0;i<searchWord.size();i++){
            vector<string> sub;
            s+=searchWord[i];
            // cout<<s<<endl;
            int k=0;
            for(int j=0;j<products.size();j++){
                
                string t=products[j].substr(0,s.size());
                // cout<<t<<endl;
                
                
                if(s==t and sub.size()<3){
                    sub.push_back(products[j]);
                    // k++;
                }
                
            }
            ans.push_back(sub);
        }
        
        
        
        return ans;
    }
};