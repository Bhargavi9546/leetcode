class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        double sum=0,maxavg=-100000;
        for (int right=0;right<nums.size();right++)
        {
           sum+=nums[right];
           if (right>=k-1)
           {
            double avg=sum/k;
            maxavg=max(maxavg,avg);
            sum-=nums[left];
            left++;
           }

        }
        return maxavg;
    }
};