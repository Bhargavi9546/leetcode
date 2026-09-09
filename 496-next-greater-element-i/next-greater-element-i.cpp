class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
  stack<int>st;
  unordered_map<int,int>mpp;
  for (int i:nums2)
  {
    while (!st.empty()&&i>st.top())
    { mpp[st.top()]=i;
      st.pop();
    }
    st.push(i);
  }
  vector<int>ans;
  for (int i:nums1)
  {
    if (mpp.count(i))
    {
        ans.push_back(mpp[i]);
    }
    else {
        ans.push_back(-1);
    }
  }
    return ans;
}
};