class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][10]={false};
        bool cols[9][10]={false};
        bool subs[9][10]={false};
        for (int r=0;r<9;r++){
            for (int c=0;c<9;c++){
                if (board[r][c]=='.') continue;
                int nums=board[r][c]-'0';
                int sindex=(r/3)*3+(c/3);
                if (rows[r][nums] || cols[c][nums] || subs[sindex][nums]) return false;
                rows[r][nums]=cols[c][nums]=subs[sindex][nums]=true;
            }
        }
        return true;
    }
};
