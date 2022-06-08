class Solution {
public:
    int removePalindromeSub(string s) {
        //easy we can see a subsequneces
        
        //only 2 chars present so the subsequence be 
        //aaaa.....
        //bb....
        //maximum 2 so 
        //if the string s is palindrome return 1 else return 2;
        
        
        string t=s;
        reverse(t.begin(),t.end());
        
        return s==t ? 1 :2;
        
        
    }
};