class Solution {
public:
    bool isValid(string word) {
        int vowel=0,conso=0,num=0;
        string vowels="aeiou";
        if(word.length()<3)
        {
            return false;
        }
        for(int i=0;i<word.size();i++)
        {
                char it=tolower(word[i]);
                if(vowels.find(it)!=string::npos)
                    vowel=1;
                else if(isdigit(it))
                    num=1;
                else if(isalpha(it))
                    conso=1;
                else
                    return false;
         }

        
        return (vowel && conso);
        
    }
};