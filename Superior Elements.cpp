vector<int> superiorElements(vector<int>&a) {
    vector<int>ans;
    int n =a.size();
    int maxa = INT_MIN;
    for(int i=n-1;i>=0;i--)
    {
      if (a[i] > maxa) {
        ans.push_back(a[i]);
        maxa = a[i];
      }
    }
    return ans;
}
