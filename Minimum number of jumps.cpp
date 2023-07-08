class Solution{
  public:
    int minJumps(int a[], int n){
        int maxreach=0,current=0;
        int i=0;
        int count=0;
        if(a[0]==0)
        return -1;
        
        for(i=0;i<n-1;i++)
        {
            maxreach = max(maxreach,a[i]+i);
            
            if(i == current)
            {
                current = maxreach;
                count++;
            }
            
           if(current > n-1)
           break;
        }
        if(current<i)
        return -1;
        return count;
    }
};
