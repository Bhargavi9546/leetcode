class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while (i<=j)
        {    int mid=(i+j)/2;
            if (nums[mid]>=target )
            {
                j=mid-1;
            }
            else {
                i=mid+1;
            }
        }
        int lb=i;
        i=0,j=n-1;
        
         while (i<=j)
        {  int mid=(i+j)/2;
            if (nums[mid]>target )
            {
                j=mid-1;
            }
            else {
                i=mid+1;
            }
        }
       int ub=i;
       if (ub==lb) return {-1,-1};
       else return {lb,ub-1}; 
    }
};