class Solution {
  public:
    void bitManipulation(int num, int i) {

        int a = 1;
        a = a<<i-1;
        
        int ans = num & a;
        
        if(ans > 0){
            cout<<1<<" ";
            cout<<num<<" ";
            cout<<(num ^ a)<<" ";
        }
        else{
             cout<<0<<" ";
             cout<<(num | a)<<" ";
              cout<<num<<" ";
        }
       
        
    }
};
