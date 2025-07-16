class Solution {
public:
    string reverseWords(string s) {
        string result="",finals="";
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]!=' ')
            {
                 result=s[i]+result;
            }
            else
            {
                
                finals.append(result+" ");
                result="";
            }
        }
        //reverse(result.begin(),result.end());
        finals.append(result);
        return finals;
    }
};