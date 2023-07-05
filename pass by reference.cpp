class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        vector<int> vec ={0,0};
        vec[0]= a+1;
        vec[1]=b+2;
        return vec;
    }
};
