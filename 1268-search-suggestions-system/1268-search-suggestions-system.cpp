class Solution {
public:
    
    // return rows with size of sub problem so take a empty string and traverse at each time add the next vhar to the string S then traverse products make the first prefix of each word to the size of S and compare if its same push to the vector
    
    
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        string s="";
        
        ///sorting
        sort(products.begin(),products.end());
        
        //traverse the string searchWord
        for(int i=0;i<searchWord.size();i++){
            vector<string> sub; //temp arr to push 
            s+=searchWord[i];  //each time add new element
          
            //traverse products
            for(int j=0;j<products.size();j++){
                
                //make the products[i] string size as same as S 
                string t=products[j].substr(0,s.size());
                
                //compare if same push to the vector make sure it doesnt exceed size of 3
                if(s==t and sub.size()<3){
                    sub.push_back(products[j]);
                }
                
            }
            ans.push_back(sub);
        }
        
        
        return ans;
    }
};