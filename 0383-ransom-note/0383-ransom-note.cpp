class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mymap;
        for(auto it:magazine) mymap[it]++;
        for(auto it:ransomNote)
        {
            if(mymap.find(it)!=mymap.end())
            {
                mymap[it]--;
                if(mymap[it]==0)
                    mymap.erase(it);
            }
            else
                return false;
        }
        return true;
    }
};