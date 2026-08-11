class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> mpp;
        for (char ch:p)
        {
            mpp[ch]++;
        }
        int left=0;
        map<char,int>mpp2;
        vector<int>ans;
        for ( int right=0;right<s.size();right++)
        {
            mpp2[s[right]]++;
            if (right>=p.size()-1)
            {
                if (mpp==mpp2)
                {
                    ans.push_back(left);  
                }
                mpp2[s[left]]--;
                if (mpp2[s[left]]==0)
                {
                    mpp2.erase(s[left]);
                    
                }
                left++;
            }
        }
        return ans;
    }
};