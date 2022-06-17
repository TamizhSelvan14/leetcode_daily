class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        // string s="";
        
//         for(int word=0;word<words.size();word++){
            
//             string temp=words[word];
            
//             int i=0,j=temp.size()-1;
//             bool check=true;
//             while(i<=j){
//                 if(temp[i]!=temp[j])
//                 {
//                     check=false;
//                     break;
//                 }
                
//                 i++;
//                 j--;
                
//             }
            
//             if(check)
//             {
//                 s=temp;
//                 break;
//             }
            
//         }
        
        
        //easy approach if the reverse of word is same then return ans;
        
        for(auto s:words)
        {
            if(s==string(rbegin(s),rend(s)))
                return s;
        }
        
        return "";
    }
};