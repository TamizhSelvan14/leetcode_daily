class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
            auto i = 0, j = 0;
              while (i < s.size()) {
                maxCost -= abs(s[i] - t[i]);
                  i++;
                if (maxCost < 0){
                    maxCost += abs(s[j] - t[j]);
                    j++;
                } 
            }
          return i - j;
    }
};