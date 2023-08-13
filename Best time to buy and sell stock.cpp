int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int n=prices.size();
   int ans=INT_MIN;
   int i=0,j=0;
   while(j<n)
   {
       
       if(prices[j]>=prices[i])
       ans = max(ans,prices[j]-prices[i]);
       else if(prices[j]<prices[i])
       i=j;

       j++;
   }
    
   return ans;

}
