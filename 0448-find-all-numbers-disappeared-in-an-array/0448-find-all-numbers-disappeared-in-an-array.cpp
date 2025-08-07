class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>mymap;
        for(auto it:nums)mymap[it]++;
        for(int i=1;i<=nums.size();i++)
        {
            if(mymap.find(i)==mymap.end())
                result.push_back(i);
        }
        return result;
    }
};