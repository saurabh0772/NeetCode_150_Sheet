class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 3 things to check for a valid sudoku
        // 1. rows must be unique
        // 2. cols must be unique
        // 3. 3x3 must be unique

        // bool rows[9][9] = {}, cols[9][9] = {}, boxes[9][9] = {};

       int rows[9] = {}, cols[9] = {}, boxes[9] = {};


        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                // skip if .
                if(board[i][j] == '.') continue;

                int number = board[i][j] - '0';
                int box_number = (i/3) * 3 + (j/3);
                int mask = 1 << number;

                if((rows[i] & mask) || (cols[j] & mask) || (boxes[box_number] & mask)) {
                    return false;
                }

                // number not present
                rows[i] |= mask;
                cols[j] |= mask;
                boxes[box_number] |= mask;
            }
        }
        return true;
    }
};
