class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0,right=0;
        string vowels="aeiou";
        int vowelcnt=0,maxcnt=0;
        for (int i=0;i<k;i++)
        {
            if (vowels.find(s[i])!=string::npos)
            {
                vowelcnt++;
            }
        }
        maxcnt=max(maxcnt,vowelcnt);
        for (int i=k;i<s.size();i++)
        {
            if(vowels.find(s[i])!=string::npos)
            {
                vowelcnt++;
            }
            if(vowels.find(s[i-k])!=string::npos)
            {
                vowelcnt--;
            }
            maxcnt=max(maxcnt,vowelcnt);
        }
       return maxcnt;
    }
};