class Solution {
public:
    bool doesAliceWin(string s) {
        int vowelCount=0;

        for(auto x:s){
            if(x=='a' or x=='e' or x=='i' or x=='o' or x=='u')
                vowelCount++;
        }

        if(vowelCount==0)
            return false;

        if(vowelCount%2 > 0)
            return true;




        return true;
    }
};