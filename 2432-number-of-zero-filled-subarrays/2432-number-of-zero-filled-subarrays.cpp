class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0,sum=0;
        for(auto it:nums)
        {
            if(it==0)
            {
                sum++;
                count+=sum;
            }
            else
                sum=0;
        }
        return count;
    }
};