class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int eat=candyType.size();
        eat/=2;
        unordered_set<int>myset(candyType.begin(),candyType.end());
        if(myset.size()>=eat) 
            return eat;
        return myset.size();
    }
};