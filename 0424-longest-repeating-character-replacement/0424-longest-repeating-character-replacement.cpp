class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0,maxfreq=0,l=0,r=0;
        unordered_map<int,int>mymap;
        while(r<s.size())
        {
            mymap[s[r]-'A']++;
            maxfreq=max(maxfreq,mymap[s[r]-'A']);
            if((r-l+1) -maxfreq>k)
            {
                mymap[s[l]-'A']--;
                maxfreq=0;
                l=l+1;
            }
            if((r-l+1)-maxfreq<=k)
            {
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
        
    }
};