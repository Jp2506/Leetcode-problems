class Solution {
public:
    int counter(vector<int>&nums, int k)
    {
        unordered_map<int,int>mymap;
        int n=nums.size(),count=0;
        int l=0,r=0;
        while(r<n)
        {
            mymap[nums[r]]++;
            while(mymap.size()>k)
            {
                mymap[nums[l]]--;
                if(mymap[nums[l]]==0)
                {
                    mymap.erase(nums[l]);
                }
                l++;
            }
            if(mymap.size()<=k)
            {
                count=count+(r-l)+1;
                r++;

            }
             
            
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int count1=counter(nums,k);
        int count2=counter(nums,k-1);
        return count1-count2;
    }
};