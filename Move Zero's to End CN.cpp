vector<int> moveZeros(int n, vector<int> a) {
    vector<int>v;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=0)
        v.push_back(a[i]);
        else
        count++;
    }
    while(count--)
    {
        v.push_back(0);
    }

    return v;
}
