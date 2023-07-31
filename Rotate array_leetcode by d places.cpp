class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k%n;
        vector<int>v;
        int p=n-1;
       for(int i=0;i<k;i++)
       {
           v.push_back(nums[p]);
           p--;
       }

        for(int i=n-k-1;i>-1;i--)
        nums[i+k]=nums[i];
        int j = k-1;
        for(int i=0;i<k;i++)
        {
            nums[i]=v[j];
            j--;
        }
    }
};
