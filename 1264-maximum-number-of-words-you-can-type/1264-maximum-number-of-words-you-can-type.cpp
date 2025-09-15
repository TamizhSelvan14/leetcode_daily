class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count=0;
        int broken=false;

        set<char> st;

        for(auto x:brokenLetters){
            st.insert(x);
        }

        for(int i=0;i<text.size();i++){
            if(text[i]==' ' and !broken){
                count++;
            }else if(text[i]==' ' and broken){
                broken=false;
                continue;
            }

            if(text[i] !=' ' and st.find(text[i]) != st.end()){
                    broken=true;
            }

        }

        //count last word as well
        if(!broken)
            count++;


        return count;
    }
};