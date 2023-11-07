vector<int> bitManipulation(int num, int i){
    vector<int>ans;
    i = i-1;
    if((num & (1<<i)) ==  1<<i )
    ans.push_back(1);
    else
    ans.push_back(0);

    ans.push_back(num | (1<<i));

    ans.push_back(num & ~(1<<i));
    
    return ans;
}
