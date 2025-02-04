bool solve(int index, int curr_sum, int target, vector<int>&a){
    if(curr_sum > target) return false;
    if(index == a.size()){
        if(curr_sum == target) return true;
        else return false;
    }

    // take
    curr_sum += a[index];
    if(solve(index +1,curr_sum,target,a) == true) return true;

    // not take 
    curr_sum -= a[index];
    if(solve(index +1, curr_sum, target ,a ) == true) return true;

    return false;
}


bool isSubsetPresent(int n, int k, vector<int> &a)
{
    return solve(0,0,k,a);
}
