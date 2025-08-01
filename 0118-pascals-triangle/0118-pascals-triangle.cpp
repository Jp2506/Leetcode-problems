class Solution {
public:
    vector<int>ncr(int row)
    {
        vector<int>arr;
        int ans=1;
        arr.push_back(1);
        for(int col=1;col<row;col++)
        {
            ans=ans*(row-col);
            ans=ans/col;
            arr.push_back(ans);
        }
        return arr;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++)
        {
            result.push_back(ncr(i));
        }
        return result;
    }
};