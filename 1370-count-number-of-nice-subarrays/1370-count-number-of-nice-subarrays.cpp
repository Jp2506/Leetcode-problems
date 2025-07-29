class Solution {
public:
    int calc(vector<int>& nums,int k)
    {
        int l=0,r=0;
        long long sum=0;
        if(k<0) return 0;
        int count=0;
        while(r<nums.size())
        {
            sum+=nums[r]%2;
            while(sum>k)
            {
                sum=sum-nums[l]%2;
                l++;
            }
            count+=(r-l)+1;
            r++;
        }
        
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int res1=calc(nums,k);
        int res2=calc(nums,k-1);
        return res1-res2;
    }
};