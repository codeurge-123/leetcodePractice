class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int e = matrix.size()*matrix[0].size()-1;

        int mid = s + (e-s)/2;

        while(s <= e) {
            int rowIndex = mid/matrix[0].size();
            int colIndex = mid%matrix[0].size();

            if(matrix[rowIndex][colIndex] == target) return true;
            else if(matrix[rowIndex][colIndex] > target) e = mid-1;
            else s = mid+1;

            mid = s + (e-s)/2;

        }

        return false;


    }
};