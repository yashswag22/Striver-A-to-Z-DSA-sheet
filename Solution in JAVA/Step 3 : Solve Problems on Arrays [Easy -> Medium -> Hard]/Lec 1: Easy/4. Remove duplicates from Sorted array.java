class Solution {
    public int removeDuplicates(int[] nums) {
        int i =0;
        int j  = 1;
        int k = nums.length;
        while(j<k){
            if(nums[i]<nums[j] && nums[i]!= nums[j]){
                i++;
                j++;
            }
            else if(nums[i] == nums[j] || nums[i]>nums[j]){
                while(j<k && nums[j] <= nums[i] )
                    j++;
                if(j>=k) continue;
                nums[i+1] = nums[j];
                j= i+1;
            }
        }

        return i+1;
    }
}
