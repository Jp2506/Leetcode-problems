class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mymap;
        for(auto it:s)
        {
            mymap[it]++;
        }
        vector<pair<char,int>>vec(mymap.begin(),mymap.end());
        sort(vec.begin(),vec.end(),[](pair<char,int>&a,pair<char,int>&b)
        {
            return a.second>b.second;
        });

    string result;
        for(auto it:vec)
        {
            for(int i=0;i<it.second;i++) result+=it.first;
        }
        return result;
    }
};