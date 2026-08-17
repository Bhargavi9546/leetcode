class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> vec;
        vec.push_back(0);
        int sum=0;
        for (int i:gain)
        {
            sum+=i;
            vec.push_back(sum);
        }
        sort(vec.rbegin(),vec.rend());
        return vec[0];

    }
};