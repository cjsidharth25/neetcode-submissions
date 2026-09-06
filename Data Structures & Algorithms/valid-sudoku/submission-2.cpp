class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rsv(9),csv(9),ssv(9);
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                if(!rsv[i].insert(board[i][j]).second) return false;
                if(!csv[j].insert(board[i][j]).second) return false;
                if(!ssv[(i/3)*3 + (j/3)].insert(board[i][j]).second) return false;
            }
        }
        return true;
    }
};
