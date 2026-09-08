class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mpp;
        mpp[0]=-1;
        int maxi=0;
        int cnt=0;
        for (int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            cnt+=1;
            else cnt-=1;
            if(mpp.find(cnt)!=mpp.end())
            {
                int len=i-mpp[cnt];
                if (len>maxi)
                {
                    maxi=len;
                }
            }
            else {
                mpp[cnt]=i;
            }
        }
        return maxi;
    }
};