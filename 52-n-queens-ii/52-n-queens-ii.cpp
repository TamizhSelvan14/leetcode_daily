class Solution {
    
public:
    
    
    void solve(int col,vector<vector<string>> &ans,vector<string> &board,vector<int>&leftrow,vector<int> &lowerDiagonal,vector<int> &higherDiagonal,int n){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
        
            
        if(leftrow[row]==0 and lowerDiagonal[row+col]==0 and higherDiagonal[(n-1)+(col-row)]==0){
            
            leftrow[row]=1;
            lowerDiagonal[row+col]=1;
            higherDiagonal[(n-1)+(col-row)]=1;
            board[row][col]='Q';
            
        solve(col+1,ans,board,leftrow,lowerDiagonal,higherDiagonal,n);
        
            
            
            leftrow[row]=0;
            lowerDiagonal[row+col]=0;
            higherDiagonal[(n-1)+(col-row)]=0;
            board[row][col]='.';
            
            
            
            
            
        }
        
            
            
        }
        
        
        
        
        
        
        
        
        
    }    
    
    
    
    int totalNQueens(int n) {
        
        
        vector<vector<string>> ans;
        
        vector<string> board(n);
        
        string s(n,'.');
        
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        
        vector<int>leftrow(n,0);
        vector<int>lowerDiagonal(2*n-1,0);
        vector<int>higherDiagonal(2*n-1,0);
        
        solve(0,ans,board,leftrow,lowerDiagonal,higherDiagonal,n);
        
        
        
        
        
        
        return ans.size();
    }
};