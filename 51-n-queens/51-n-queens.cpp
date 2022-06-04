class Solution {
public:
    
    void solve(int col,vector<string> &board,vector<vector<string>> &ans,int n,vector<int> &leftrow,vector<int> &upperdiagonal,vector<int> &lowerdiagonal){
        
        if(col==n){
        ans.push_back(board);
            return;
        }
        
        //useing hashing
        
                for(int row=0;row<n;row++){
            
                    if(leftrow[row]==0 and upperdiagonal[(n-1)+(col-row)]==0 and lowerdiagonal[row+col]==0){
                        
                        leftrow[row]=1;
                        upperdiagonal[(n-1)+(col-row)]=1;
                        lowerdiagonal[row+col]=1;
                        board[row][col]='Q';
                        
                        solve(col+1,board,ans,n,leftrow,upperdiagonal,lowerdiagonal);
                        
                        
                        leftrow[row]=0;
                        upperdiagonal[(n-1)+(col-row)]=0;
                        lowerdiagonal[row+col]=0;
                        board[row][col]='.';
                        
                    }

                }
    
            
        }
        
 
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);//data structure
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        vector<int> leftrow(n,0);
        vector<int> upperdiagonal(2*n -1,0);
        vector<int> lowerdiagonal(2*n-1,0);
            
         solve(0,board,ans,n,leftrow,upperdiagonal,lowerdiagonal)   ;
        
        
        
      
        
        return ans;
    }
};