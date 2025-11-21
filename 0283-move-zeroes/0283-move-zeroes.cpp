class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(),ind;
        if(n<2) return;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) 
            {
                ind=i;
                break;
            }

        }
        for(int j=ind+1;j<n;j++)
        {
            if(nums[j]!=0)
            {
                swap(nums[ind],nums[j]);
                ind++;
            }
        }
    }
};