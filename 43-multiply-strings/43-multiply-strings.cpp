class Solution {
public:
    string multiply(string num1, string num2) {
        
         int m = num1.size(), n = num2.size();
        string ans(m + n, '0');
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                int val=(num1[i] - '0') * (num2[j] - '0');
                int sum = val + (ans[i + j + 1] - '0');
                
                char remainder=sum % 10 + '0';
                char carry=sum/10;
                
                ans[i + j + 1] = remainder;
                ans[i + j] +=carry;
            }
        }
        for (int i = 0; i < m + n; i++) {
            if (ans[i] != '0') {
                return ans.substr(i);
            }
        }
        return "0";
    }
};