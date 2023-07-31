class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        if(nums[i]==0)
        count++;
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]==0)
            {
                if(n-count == i)
                break;
                for(int j=i+1;j<nums.size();j++)
                nums[j-1]=nums[j];
                nums[n-1]=0;
               if(nums[i]==0)
               i--;
            }
        }
    }
};
