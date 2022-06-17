class Solution {
public:
    bool isPalindrome(string s) {
       int i=0;
        int j=s.size()-1;
        
        while(i<j){
            
            
            //here using isalpha is failing because
            //beacuse we have to accp=et if it has oly special chars
            //so use isalnum which accepts the charters
            while(isalnum(s[i])==false and i<j){
                i++;
            }
            
            while(isalnum(s[j])==false and i<j){
                j--;
            }
            
            if(toupper(s[i])!=toupper(s[j]))
                return false;
            
            
            i++;
            j--;
        }
        
        return true;
    }
};