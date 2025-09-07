class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()< s1.size())
        return 0;

        sort(s1.begin(),s1.end());

        for(int i=0;i<=s2.size()-s1.size();i++)
        {
            string s=s2.substr(i,s1.size());
            // cout<<s<<endl;
            sort(s.begin(),s.end());

            if(s1==s)
            return true;

        }

        return false;

    }
};