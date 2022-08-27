class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        
          int m = matrix.size(), n = matrix[0].size();
        int ans = INT_MIN;
        
        for (int r1 = 0; r1 < m; ++r1) {
           vector<int> arr(n); // arr[i] is sum(matrix[r1][c]...matrix[r2][c])
            for (int r2 = r1; r2 < m; ++r2) {
                for (int c = 0; c < n; ++c) 
                    arr[c] += matrix[r2][c];
                
                ans = max(ans, maxSumSubArray(arr, n, k));
            }
        }
        return ans;
    }
    
    int maxSumSubArray(vector<int> arr, int n, int k) { // O(N * logN)
       set<int> bst;
        bst.insert(0);
        int ans = INT_MIN;
        for (int i = 0, right = 0; i < n; ++i) {
            right += arr[i];
            set<int>::iterator it = bst.lower_bound(right - k);
          
            
                if (it != bst.end()) 
                    ans = max(ans, right - *it);
            
                bst.insert(right);
        }
        
        
        return ans;
        
        
    }
};