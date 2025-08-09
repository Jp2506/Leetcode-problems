class Solution {
public:
    int thirdMax(vector<int>& nums) {
       long first=LONG_MIN,second=LONG_MIN,third=LONG_MIN;
        for(auto it:nums)
        {
            if(it==first||it==second||it==third) continue;
            if(it>first)
            {
                third=second;
                second=first;
                first=it;
            }
            else if(it>second)
            {
                third=second;
                second=it;
            }
            else if(it>third)
            {
                third=it;
            }
        }
        return (third==LONG_MIN)?first:third;
    }
};