class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=n;i<n+n;i++)nums.push_back(nums[i-n]);
        return nums;

    }
};