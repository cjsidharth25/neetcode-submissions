class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rsv(9),csv(9);
        for(int i = 0 ; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    if(!rsv[i].insert(board[i][j]).second){
                    return false;
                    }
                    if(!csv[j].insert(board[i][j]).second){
                        return false;
                    }
                }
                
            }
        }
        for(int i = 0; i < 9; i += 3){
            for(int j = 0; j < 9; j += 3){
                set<char> s;
                for(int k = i; k < i+3; k++){
                    for(int l = j; l < j+3; l++){
                        if(board[k][l] != '.'){
                            if(!s.insert(board[k][l]).second){
                                return false;
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
