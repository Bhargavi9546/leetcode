class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=1;
        long long  prefixsum=0;
        int cnt=0;
        for (int i=0;i<nums.size();i++)
        {
            prefixsum+=nums[i];
            int r= (prefixsum % k + k) % k;
            if (mpp.find(r) != mpp.end()) {
                cnt += mpp[r];
            }
            
            mpp[r]++;
        }
        
        return cnt;
        }
    
};