class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,char>first,second;
        for(int i=0;i<s.size();i++)
        {
            char s1=s[i];
            char s2=t[i];
            if(first.count(s1)&&first[s1]!=s2)
                return false;
            if(second.count(s2)&& second[s2]!=s1)
                return false;
            first[s1]=s2;
            second[s2]=s1;

        }
        return true;
    }
        
};