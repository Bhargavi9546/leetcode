class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for (string i:operations)
        {
            if (i!="C"&&i!="D"&&i!="+")
            {   int num=stoi (i);
                st.push(num);
            }
            else if (i=="C")
            {
                st.pop();
            }
            else if (i=="D")
            {
                int ans=2*st.top();
                st.push(ans);
            }
            else if (i=="+")
            {
                int first=st.top();
                st.pop();
                int s=first+st.top();
                st.push(first);
                st.push(s);
            }
        }
        int sum=0;
        while (!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};