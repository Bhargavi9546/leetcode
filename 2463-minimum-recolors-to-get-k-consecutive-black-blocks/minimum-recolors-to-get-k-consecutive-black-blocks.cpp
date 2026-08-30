class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int curr_whi=0;
        int min_oper=INT_MAX;
        int n=blocks.size();
        for (int i=0;i<n;i++)
        {
            if (blocks[i]=='W')
            {
                curr_whi++;
            }
            if (i >= k && blocks[i - k] == 'W') {
                curr_whi--;
            }
            if (i >= k - 1) {
                min_oper = min(min_oper, curr_whi);
            }
        }
        
        return min_oper;
        }
};