class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                j=i;break;
            }
        }
        int k=j+1;
        while(j<nums.size() && k<nums.size())
        {
            if(nums[k]!=0)
            {
                swap(nums[j],nums[k]);
                j++;
                k++;
            }
            else
            {
                k++;
            }
        }
    }
};