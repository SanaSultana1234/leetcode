class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(), col=matrix[0].size(), mid, s=0, e=row*col-1;
        if(row==0 || col==0)
            return false;
        while(s<=e) {
            mid=s+(e-s)/2;
            if(matrix[mid/col][mid%col]==target) 
                return true;
            else if(matrix[mid/col][mid%col]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return false;
    }
};