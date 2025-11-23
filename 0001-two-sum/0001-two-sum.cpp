class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        unordered_map<int,int>nummap;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int rem=target-nums[i];
            if(nummap.find(rem)!=nummap.end())
            {
                result.push_back(i);
                result.push_back(nummap[rem]);
                break;
            }
            nummap[nums[i]]=i;
        }
        return result;
    }
};