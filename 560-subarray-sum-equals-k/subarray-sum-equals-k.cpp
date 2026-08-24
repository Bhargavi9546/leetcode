class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    { int n=nums.size();
      map<int,int> mpp;
      mpp[0]=1;
      int subcnt=0,prefixcnt=0;
      for (int i=0;i<n;i++)
      {
        prefixcnt+=nums[i];
        int req=prefixcnt-k;
        if (mpp.find(req)!=mpp.end())
        {
            subcnt+=mpp[req];
        }
        mpp[prefixcnt]++;
      } 
     return subcnt;
    }
};