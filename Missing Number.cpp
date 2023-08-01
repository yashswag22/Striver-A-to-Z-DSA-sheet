typedef long long ll;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ll sum = (nums.size()*(nums.size()+1))/2;
        ll count=0;
        for(int i=0;i<nums.size();i++)
        {
            count+=nums[i];
        }
        int ans = sum -count;
        return ans;
    }
};
