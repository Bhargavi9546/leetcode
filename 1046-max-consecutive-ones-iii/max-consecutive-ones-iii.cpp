class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int cnt1=0,cnt0=0;
        int maxcnt=0;
        for (int i=0;i<nums.size();i++)
        {
           if (nums[i]==1) cnt1++;
           else cnt0++;
           while (cnt0>k)
           {
            if(nums[left]==0)
                cnt0--;
            left++;
           }
           maxcnt=max(maxcnt,i-left+1);
        }
        return maxcnt;
    }
};