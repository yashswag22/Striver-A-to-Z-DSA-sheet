int solve(int index, int curr_sum, int target,vector<int>&arr){
      // base case
       if(curr_sum>target) return 0;
      if(index == arr.size()){
        //   if(curr_sum>target) return 0;
          
          if(curr_sum == target) return 1;
          else return 0;
        }
        
        // take
        curr_sum += arr[index];
        int l = solve(index +1, curr_sum,target,arr);
        
        // not take
        curr_sum -= arr[index];
        int r = solve(index +1, curr_sum, target, arr);
        
        return l+r;
  }
  
    int perfectSum(vector<int>& arr, int target) {
        return solve(0,0,target, arr);
    }
