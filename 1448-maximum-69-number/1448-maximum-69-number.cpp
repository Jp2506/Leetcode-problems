class Solution {
public:
    int maximum69Number (int num) {
        int maxi=num;
        string newstring=to_string(num);
        
        for(int i=0;i<newstring.size();i++)
        {
            string temp=newstring;
            
            if(newstring[i]-'0'==6)
            {
                temp[i]='9';
                maxi=max(maxi,stoi(temp));
            }
            else if(newstring[i]-'0'==9)
            {
                temp[i]='6';
                maxi=max(maxi,stoi(temp));
            }
             
        }
        return maxi;
    }
};