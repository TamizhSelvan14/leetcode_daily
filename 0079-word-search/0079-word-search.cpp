class Solution {
public:
    bool solve(vector<vector<char>>& board, string word,int n,int m,int i,int j,int index){
        
        if(i<0 or i>=n or j<0 or j>=m or board[i][j]!=word[index]){
            return false;
        }
        
        
        if(index==word.size()-1 and board[i][j]==word[index])
            return true;
        
        board[i][j]='0';
        
        bool a=solve(board,word,n,m,i+1,j,index+1);
        
       bool b=solve(board,word,n,m,i,j+1,index+1);
        bool c=solve(board,word,n,m,i-1,j,index+1);
        bool d=solve(board,word,n,m,i,j-1,index+1);

                board[i][j]=word[index];

        
        return (a or b or c or d);
        
    }
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
               if(solve(board,word,n,m,i,j,0)){
                   return true;
               }
                
                
            }
        }
        
        return false;
    }
};