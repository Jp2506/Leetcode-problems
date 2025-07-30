class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>value(3,-1);
        int n=s.size(),count=0;
        for(int i=0;i<n;i++)
        {
            value[s[i]-'a']=i;
            if(value[0]!=-1 && value[1]!=-1 && value[2]!=-1)
            {
                count=count+1+min(min(value[0],value[1]),value[2]);
            }

        }
        return count;
    }
};