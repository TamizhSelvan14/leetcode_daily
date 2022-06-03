class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        
//         map<int,int> hashmap;
        
//         int temp=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
                
//                 hashmap.insert({temp,matrix[i][j]});
//                 temp++;
                
//             }
            
//         }
        
//         int var=n-1;
//         auto iter = hashmap.begin();
        
       
//         for(int i=0;i<n;i++){
            
//             for(int j=0;j<n;j++){
                
//                 matrix[j][var]=iter->second;
//                  iter++;
                
//             }
//             var--;
//         }
        
        //transpose  of a matrix
        for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
					swap(matrix[i][j],matrix[j][i]);
				}
		}
					
			
        //reversing to get the ans
            for(int i=0;i<n;i++){
				reverse(matrix[i].begin(),matrix[i].end());
			}
        
        
    }
};