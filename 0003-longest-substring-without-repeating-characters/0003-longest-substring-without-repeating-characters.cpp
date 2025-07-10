class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>s1;
        int left=0,maxlen=0;
        for(int right=0;right<s.size();right++)
        {
            while(s1.find(s[right])!=s1.end())
            {
                s1.erase(s[left++]);

            }
            s1.insert(s[right]);
            maxlen=max(maxlen,(right-left)+1);
        }
        return maxlen;
    }
};