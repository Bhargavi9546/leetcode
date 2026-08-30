class Solution {
    bool is_vowel(char ch)
{
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>freq;
        for (char ch:s)
        {
            freq[ch]++;
        }
        int maxvowelcnt=0,maxconstcnt=0;
        for (auto const& i:freq)
        {
           char ch=i.first;
           int cnt=i.second;
           if (is_vowel(ch))
           {
            maxvowelcnt=max(maxvowelcnt,cnt);
           } 
           else {
            maxconstcnt=max(maxconstcnt,cnt);
           }
        }
        return maxvowelcnt+maxconstcnt;
    }
};