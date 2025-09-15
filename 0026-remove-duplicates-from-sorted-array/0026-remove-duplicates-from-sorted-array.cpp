class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=i+1;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[j]==nums[i])
                j++;
            else
            {
                swap(nums[i+1],nums[j]);
                i++;
                j++;
            }
        }
        return i+1;

    }
};