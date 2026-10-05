class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 3 things to check for a valid sudoku
        // 1. rows must be unique
        // 2. cols must be unique
        // 3. 3x3 must be unique

        vector<vector<int>> rows(10, vector<int> (10, 0)), cols(10, vector<int> (10, 0)), boxes(9, vector<int> (10, 0));

        // here i declare 10 because i will used  1 as index 1 not 0... 
        // and initialize all values with 0 so that if i check and it returns 
        // zero then the elements is not present.


        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                // skip if .
                if(board[i][j] == '.') continue;

                int number = board[i][j] - '0';
                int box_number = (i/3) * 3 + (j/3);

                if(rows[i][number] || cols[j][number] || boxes[box_number][number]){
                    // number already present
                    return false;
                }

                // number not present
                rows[i][number] = number;
                cols[j][number] = number;
                boxes[box_number][number] = number;
            }
        }
        return true;
    }
};
