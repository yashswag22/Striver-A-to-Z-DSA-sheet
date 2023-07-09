void revarray(vector<int>&nums, vector<int>&v, int i)
{
    
 if(i<0)
 return;
 v.push_back(nums[i]);
 i--;
 revarray(nums,v,i);

}



vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int>v(n);
    v.clear();
   revarray(nums,v,n-1);
    return v;
}
