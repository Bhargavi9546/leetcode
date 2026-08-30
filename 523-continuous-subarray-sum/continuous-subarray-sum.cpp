class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = -1; 
        
        long long prefixSum = 0;
        
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            int rem = prefixSum % k;
            
            if (mpp.find(rem) != mpp.end()) {
                if (i - mpp[rem] >= 2) {
                    return true;
                }
            } else {
                mpp[rem] = i;
            }
        }
        
        return false;
    }
};