class Solution {
public:
    
    string combinations(char digit){
        
        
        if(digit=='2')
            return "abc";
        else if(digit=='3')
            return "def";
        
        else if(digit=='4')
            return "ghi";
        else if(digit=='5')
            return "jkl";
        else if(digit=='6')
            return "mno";
        else if(digit=='7')
            return "pqrs";
        else if(digit=='8')
            return "tuv";
        else if(digit=='9')
            return "wxyz";
        
        
        
      return "";  
    }
    
  
    void findComb(vector<string> &ans,string &s,string digits,int index){
        
        if(digits.size()==index){
            ans.push_back(s);
            return;
        }
        
        for(auto x:combinations(digits[index])){
            
            s.push_back(x);
            
            findComb(ans,s,digits,index+1);
            
            s.pop_back();
            
        }
        
    }
    
    
    vector<string> letterCombinations(string digits) {
       //iterative way in notes side bar
        
        if(digits.size()==0)
            return {};
        
        vector<string>ans;
        string s="";
        // int n=digits.size();
        findComb(ans,s,digits,0);
        
        
        return ans;
        
    }
};