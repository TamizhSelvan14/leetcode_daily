class Solution {
public:
    bool solve(int i,int j,int k,string word,vector<vector<char>>& board){
        
//         if(k==word.size())
//              return true;        
        
        if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or word[k]!=board[i][j])
            return false;
        
        
        if(k==word.size()-1 and word[k]==board[i][j])
            return true;
        
        board[i][j]='0';
        
        
        bool a=solve(i+1,j,k+1,word,board);
        bool b=solve(i,j+1,k+1,word,board);
        bool c=solve(i-1,j,k+1,word,board);
        bool d=solve(i,j-1,k+1,word,board);

        
        board[i][j]=word[k];
        
        return (a or b or c or d);
        
    }
    
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                
                if(word[0]==board[i][j]){
                    bool val=solve(i,j,0,word,board);
                    if(val)
                        return val;
                }
                
            }
        }
        
        return false;
    }
};