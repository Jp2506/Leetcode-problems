class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(),str.end());
        string first=str[0],last=str[str.size()-1];
        string result="";
        for(int i=0;i<last.size();i++)
        {
            if(first[i]!=last[i])break;
            result+=first[i];
        }
        return result;
    }
};