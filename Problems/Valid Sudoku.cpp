class Solution {
public:
bool validgrid(vector<vector<char>>& board, int start_row, int start_col, int end_row, int end_col) {
    unordered_set<char> st;
    for (int i = start_row; i <= end_row; i++) {
        for (int j = start_col; j <= end_col; j++) {
            if (board[i][j] == '.') {
                continue;
            }
            if (st.find(board[i][j]) != st.end()) {
                return false;
            }
            st.insert(board[i][j]);
        }
    }
    return true;
}                  

    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int row = 0 ; row < board.size() ; row++){
            unordered_set<char> st;
            for(int col = 0 ; col < board.size() ; col++){
                if(board[row][col] == '.') 
                    continue;
                if(st.find(board[row][col]) != st.end()){
                    return false;
                }
                st.insert(board[row][col]);
            }
        }
        for(int col = 0 ; col < board.size() ; col++){
            unordered_set<char> st;
            for(int row = 0 ; row < board.size() ; row++){
                if(board[row][col] == '.') 
                    continue;
                if(st.find(board[row][col]) != st.end()){
                    return false;
                }
                st.insert(board[row][col]);
            }
        }
        for(int start_row = 0 ; start_row < 9 ; start_row+=3){
            int end_row = start_row + 2;
            for(int start_col = 0 ; start_col < 9 ; start_col+=3){
                int end_col = start_col + 2;
                if(!validgrid(board,start_row,start_col,end_row,end_col)){
                    return false;
                }
            }
        }

        return true;
    }
};