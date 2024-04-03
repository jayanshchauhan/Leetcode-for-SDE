class Solution {
public:
    bool helper(int i,int j,vector<vector<char>>& board, string word,int punt){
        
        if(word.size() == punt) {
            return true;
        }
        
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[punt])
            return false;
        
        char temp = board[i][j];
        board[i][j] = ' ';
        
        bool ans = (helper(i+1,j,board,word,punt+1) || helper(i,j+1,board,word,punt+1) || helper(i-1,j,board,word,punt+1) || helper(i,j-1,board,word,punt+1));
        
        board[i][j] = temp;
        
        return ans;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(helper(i,j,board,word,0)){
                    return true;
                }
            }
        }
        return false;
    }
};