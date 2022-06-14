lcs function is used to find longest common subsequence(lcs) of given two strings.
=> (length of first string - length of lcs string) + (length of second string - length of lcs string)
=> length of first string +length of second string - 2length of lcs string *
for example -> word1 = "leetcode", word2 = "etco"
here lcs string is etco, lcs string length = 4
word1 length = 8, word2 length = 4
output = 8+4-24
=>8+4-8
=>4
​
class Solution {
public:
int lcs(string s1, string s2, int n1, int n2)
{
int dp[n1+1][n2+1];
for(int i = 0; i <= n1; i++)
for(int j = 0; j <= n2; j++)
if(i == 0 || j == 0) dp[i][j] = 0;
for(int i = 1; i <= n1; i++)
for(int j = 1; j <= n2; j++)
{
if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
}
return dp[n1][n2];
}
int minDistance(string word1, string word2) {
int n1 = word1.size(), n2 = word2.size();
int length = lcs(word1, word2, n1, n2);
return n1 + n2 - 2*length;
}
};