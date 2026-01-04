class Solution {
public:
    bool check(vector<vector<char>> temp) {
        unordered_map<char, int> freq;
        for (int i = 0; i < temp.size(); i++) {
            for (int j = 0; j < temp[i].size(); j++) {
                if (temp[i][j] >= '1' && temp[i][j] <= '9') {
                    freq[temp[i][j]]++;
                }
            }
        }

        for (auto i : freq) {
            if (i.second >= 2)
                return false;
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        // first for rows :
        for (int i = 0; i < board.size(); i++) {
            unordered_map<char, int> freq;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    freq[board[i][j]]++;
                }
            }
            for (auto f : freq) {
                if (f.second >= 2)
                    return false;
            }
        }

        // for cols :
        for (int i = 0; i < board.size(); i++) {
            unordered_map<char, int> freq;
            for (int j = 0; j < board[i].size(); j++) {
                if (board[j][i] >= '1' && board[j][i] <= '9') {
                    freq[board[j][i]]++;
                }
            }
            for (auto f : freq) {
                if (f.second >= 2) {
                    return false;
                }
            }
        }

        // for 3*3 grid :
        int m = 0;
        for (int a = 0; a < 3; a++) {
            int j = 0;
            for (int i = 0; i < 3; i++) {
                vector<vector<char>> temp;
                for (int k = j; k < j + 3; k++) {
                    vector<char> st;
                    for (int l = m; l < m + 3; l++) {
                        st.push_back(board[k][l]);
                    }
                    temp.push_back(st);
                }
                if (!check(temp))
                    return false;
                j += 3;
            }
            m += 3;
        }

        return true;
    }
};