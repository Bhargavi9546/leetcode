class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if (n==1) return 1;
        sort(nums.begin(),nums.end());
        int cnt=1,maxi=1;
        for (int i=0;i<n-1;i++)
        {
            if (nums[i]==nums[i+1])
            continue;
            else if (nums[i+1]-nums[i]==1)
            cnt++;
            else {
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        return max(maxi,cnt);
    }
};