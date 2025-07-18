class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        unordered_map<string,vector<string>>mymap;
        for(auto value:strs)
        {
            string word=value;
            sort(word.begin(),word.end());
                mymap[word].push_back(value);
        }
        for(auto it:mymap)
        {
            result.push_back(it.second);
        }
        return result;

    }
};