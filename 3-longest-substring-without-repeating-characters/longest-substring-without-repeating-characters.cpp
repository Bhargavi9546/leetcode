class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,maxcnt=0;
        map<char,int>mpp;
        for (int i=0;i<s.size();i++)
        {  
            mpp[s[i]]++;
            while (mpp[s[i]]>1)
            {   
                mpp[s[left]]--;
                left++;
            }
            maxcnt=max(maxcnt,i-left+1);
        }
        return maxcnt;
    }
};