class Solution {
public:
    
    void solve(int i,int j,vector<vector<char>> &board){
        
        if(i<0 or j<0 or i>=board.size() or j>=board[i].size() or board[i][j]!='O')
        {
            return;
        }
      
        
        board[i][j]='#';
        
      solve(i+1,j,board);
        
      solve(i,j+1,board);
        
      solve(i-1,j,board);
        
      solve(i,j-1,board);
        
        
    }
    
    
    
    void solve(vector<vector<char>>& board) {
        int rows=board.size(); 
        int cols=board[0].size();
        
        
        
        //traverse through the bundaries and make them as our own symbol then mark inseide O s as X and make again # to o's
        
        //traverse boundary and make dfs
        
        for(int i=0;i<rows;i++){
            
             //first row 
                if(board[i][0]=='O'){
                    solve(i,0,board);
                }
            
            //last row
            
                if(board[i][cols-1]=='O'){
                    solve(i,cols-1,board);
                }
            
        }
        
         for(int i=0;i<cols;i++){
            
             //top col
                if(board[0][i]=='O'){
                    solve(0,i,board);
                }
            
            //last col
            
                if(board[rows-1][i]=='O'){
                    solve(rows-1,i,board);
                }
            
        }
        
        
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               
                
                //now inside O-> mark as x
                if(board[i][j]=='O')
                    board[i][j]='X';
                
            }
        }
        
        
        //now make the # marked in boundary dfs to normal O
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
               
                
                //now inside O-> mark as x
                if(board[i][j]=='#')
                    board[i][j]='O';
                
            }
        }
        
        
        
    }
};