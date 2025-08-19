class Solution {
public:
    int longestPalindrome(string s) {
        int count=0;
        unordered_map<char,int>mymap;
        for(auto it:s)
        {
            mymap[it]++;
        }
        bool odd=false;
        for(auto it:mymap)
        {
            if(it.second%2==0)
                count+=it.second;
            else
            {
                odd=true;
                count+=it.second-1;
            }


        }
        return (odd)?count+1:count;
        
    }
};