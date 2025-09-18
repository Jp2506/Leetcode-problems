class Solution {
public:
    int uniquePaths(int m, int n) {
        int paths=m+n-2;
        int row=m-1;
        double result=1;

        for(int i=1;i<=row;i++)
        {
            result=result*(paths-row+i)/i;
        }
        return (int)result;
    }
};