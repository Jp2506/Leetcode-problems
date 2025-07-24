class Solution {
public:
    int subarrays(vector<int>&nums, int goal)
    {
        int count=0,l=0,r=0;
        long long sum=0;
        if(goal<0) return 0;
        while(r<nums.size())
        {
            sum+=nums[r];
            
            while(sum>goal)
            {
                sum=sum-nums[l];
                l++;
            }
            count=count+ (r-l+1);
            r++;
        }
        return count;

    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int res1=subarrays(nums,goal);
        int res2=subarrays(nums,goal-1);
        return res1-res2;
    }
};