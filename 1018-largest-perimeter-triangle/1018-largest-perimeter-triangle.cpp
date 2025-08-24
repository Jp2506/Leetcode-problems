class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size();
        int maxi=0;
        for(int i=0;i<n-2;i++)
        {
            int a=nums[i],b=nums[i+1],c=nums[i+2];
            if(b+c>a)
            {
                return b+c+a;
            }
        }
        return 0;
        
    }

};