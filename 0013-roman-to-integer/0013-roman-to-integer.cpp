class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
            
        };
        int result=mpp[s[s.length()-1]];
        for(int i=s.length()-2;i>=0;i--)
        {
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                result=result-mpp[s[i]];
            }
            else
                result=result+mpp[s[i]];
        }
        return result;


    }
};