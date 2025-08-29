class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxhead=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>maxhead) return false;
            maxhead=max(maxhead,nums[i]+i);
        }
        return true;
    }
};