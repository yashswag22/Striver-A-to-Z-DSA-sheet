class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int st=0,ind=n-1;
        while(st<=ind)
        {
            
            int mid = (st + ind)/2;
            
            if(nums[mid]==target)
            return mid;
            
            if(nums[mid]<target)
            st=mid+1;
            else if(nums[mid]>target)
            ind = mid-1;
        }
        return -1;
    }
};
