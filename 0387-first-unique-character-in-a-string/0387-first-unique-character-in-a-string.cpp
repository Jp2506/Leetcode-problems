class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mymap;
        char l;
        for(auto it:s)
        {
            mymap[it]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mymap[s[i]]==1)
            {
                 return i;
            }
        }
        return -1;
        
    }
};