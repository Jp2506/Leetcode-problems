class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size(),col=matrix[0].size();
        int low=0,high=row*col -1,i,j,mid;
        while(low<=high)
        {
             mid=(low+high)/2;
             i=mid/col;
             j=mid%col;
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]<target) low=mid+1;
            else high=mid-1;
        }
        return false;

    }
};