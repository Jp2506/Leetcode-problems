class Solution {
public:
    string reverseWords(string s) {
        vector<string>v1;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                temp=temp+s[i];
            else if(!temp.empty())
            {
                v1.push_back(temp);
                temp="";
            }
            
        }
        if(!temp.empty()) v1.push_back(temp);
        reverse(v1.begin(),v1.end());

        string result="";
        for(int i=0;i<v1.size();i++)
        {
            result+=v1[i];
            if(i!=v1.size()-1) result+=' ';
        }
        return result;
    }
};