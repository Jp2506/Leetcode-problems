class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
        string result="";
        for(char it:s)
        {
            if(it=='(' && open++ >0) result+=it;
            if(it==')' && open-- >1) result+=it;
        }
        return result;
        
    }
};