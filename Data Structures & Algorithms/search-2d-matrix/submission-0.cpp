class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size(),j = matrix[0].size();
        int r = 0, c = j - 1;

        while(r < i && c >= 0){
            if(matrix[r][c] > target){
                c--;
            } else if(matrix[r][c] < target){
                r++;
            } else{
                return true;
            }
        }
        return false;

    }
};
