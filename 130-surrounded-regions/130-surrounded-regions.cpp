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
    
    
    void BFS( int i, int j,vector<vector<char>>& board ) {
       
        int rows=board.size();
        int cols=board[0].size();
        
        if(board[i][j]!='O') return;
        else board[i][j] = '#';
        
        queue<pair<int, int>> myQueue;
        myQueue.push(make_pair(i, j));
        
        while(!myQueue.empty()) {
            int x = myQueue.front().first;
            int y = myQueue.front().second;
            myQueue.pop();
            
            if(x+1<rows && board[x+1][y]=='O') {
                myQueue.push(make_pair(x+1, y));
                board[x+1][y] = '#';
            }
            if(x-1>0 && board[x-1][y]=='O') {
                myQueue.push(make_pair(x-1, y));
                board[x-1][y] = '#';
            }
            if(y+1<cols && board[x][y+1]=='O') {
                myQueue.push(make_pair(x, y+1));
                board[x][y+1] = '#';
            }
            if(y-1>0 && board[x][y-1]=='O') {
                myQueue.push(make_pair(x, y-1));
                board[x][y-1] = '#';
            }
        }
    
    }
    
    
    void solve(vector<vector<char>>& board) {
        int rows=board.size(); 
        int cols=board[0].size();
        
        
        
        //traverse through the bundaries and make them as our own symbol then mark inseide O s as X and make again # to o's
        
        //traverse boundary and make dfs
        
        for(int i=0;i<rows;i++){
            
             //first row 
                if(board[i][0]=='O'){
                    BFS(i,0,board);
                }
            
            //last row
            
                if(board[i][cols-1]=='O'){
                    BFS(i,cols-1,board);
                }
            
        }
        
         for(int i=0;i<cols;i++){
            
             //top col
                if(board[0][i]=='O'){
                    BFS(0,i,board);
                }
            
            //last col
            
                if(board[rows-1][i]=='O'){
                    BFS(rows-1,i,board);
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