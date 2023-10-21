class Solution {
public:
    string t;
    bool isPalindrome(int i,int j){
        while(i<j){
            if(t[i]!=t[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
    
    int countSubstrings(string s) {
        t=s;
        int count=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                
                string str=s.substr(i,j-i+1);
                
                if(isPalindrome(i,j)){
                    count++;
                }
                
                
            }
        }
        
        
        return count;
    }
};