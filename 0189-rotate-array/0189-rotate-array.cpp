class Solution {
public:
    void rev(vector<int>&nums,int l,int h)
    {
        int low=l,high=h-1;
        while(low<=high)
        {
            int temp=nums[low];
            nums[low]=nums[high];
            nums[high]=temp;
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%nums.size();
        rev(nums,0,n-k);
        rev(nums,n-k,n);
        rev(nums,0,n);
        
    }
};