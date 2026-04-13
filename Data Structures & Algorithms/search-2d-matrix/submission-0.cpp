class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R=matrix.size();
        int C=matrix[0].size();
        int low=0, high=R*C-1;
        while (low<=high){
            int mid=low+(high-low)/2;
            int row=mid/C, col=mid%C;
            if (target>matrix[row][col]) low=mid+1;
            else if (target<matrix[row][col]) high=mid-1;
            else return true;
        }
        return false;
    }
};
