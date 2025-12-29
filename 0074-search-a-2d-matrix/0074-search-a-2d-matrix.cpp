class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int size = n * m;

        int s = 0;
        int e = size-1;
        int mid = s + (e-s)/2;

        while(s <= e) {
            int matrixrow = mid/m;
            int matrixcol = mid%m;

            if(target == matrix[matrixrow][matrixcol]) return true;

            else if(target > matrix[matrixrow][matrixcol]) {
                s = mid+1;
            }
            else e = mid-1;

            mid = s + (e-s)/2;


        }
        

        return false;


    }
};