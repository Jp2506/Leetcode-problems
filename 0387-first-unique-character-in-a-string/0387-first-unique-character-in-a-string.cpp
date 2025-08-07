class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int>mymap;
        char l;
        for(auto it:s)
        {
            mymap[it]++;
        }
        int result=-1;
        for(auto it:s)
        {
            if(mymap[it]==1)
            {
                 l=it;
                break;
            }
        }
       int index=s.find(l);
       if(index!=string::npos)
            return index;
        return -1;
        
    }
};