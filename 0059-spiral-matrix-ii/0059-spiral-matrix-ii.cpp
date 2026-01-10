class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int size = n * n;

        int srow = 0;
        int erow = n - 1;
        int scol = 0;
        int ecol = n - 1;

        vector<vector<int>> ans(n, vector<int>(n));
        int num = 1;

        while (srow <= erow && scol <= ecol) {
            for (int i = scol; i <= ecol; i++) {
                ans[srow][i] = num;
                num++;
            }

            for (int i = srow + 1; i <= erow; i++) {
                ans[i][ecol] = num;
                num++;
            }

            for (int i = ecol - 1; i >= scol; i--) {
                if (srow == erow)
                    break;
                ans[erow][i] = num;
                num++;
            }

            for (int i = erow - 1; i >= srow+1; i--) {
                if (ecol == scol)
                    break;
                ans[i][scol] = num;
                num++;
            }

            srow++;
            scol++;
            ecol--;
            erow--;
        }

        return ans;
    }
};