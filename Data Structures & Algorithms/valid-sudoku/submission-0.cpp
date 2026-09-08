class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check each row for duplicates, then each column for duplicates, then each 3X3 box.
        // We can use unordered_set for O(1) lookup or we can use unodered_map for the same purpose.

        unordered_set<char> s;
        //rows
        for (int i = 0; i<9; i++)
        {
            for (int j = 0; j<9; j++)
            {
                if (board[i][j] == '.') continue;
                if (s.find(board[i][j]) != s.end()) return false;
                s.insert(board[i][j]);
            }
            s.clear();
        }

        //columns
        for (int i = 0; i<9; i++)
        {
            for (int j = 0; j<9; j++)
            {
                if (board[j][i] == '.') continue;
                if (s.find(board[j][i]) != s.end()) return false;
                s.insert(board[j][i]);
            }
            s.clear();
        }

        //boxes
        for (int i = 0; i<9; i+=3)
        {
            for (int j = 0; j<9; j+=3)
            {
                for (int idx = 0; idx<9; idx++)
                {
                    char el = board[i + idx/3][j + idx%3];
                    if (el == '.') continue;
                    if (s.find(el) != s.end()) return false;
                    s.insert(el);
                }
                s.clear();
            }
        }

        return true;
    }
};
