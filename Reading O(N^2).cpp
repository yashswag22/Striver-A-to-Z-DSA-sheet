string read(int n, vector<int> book, int target)
{
    string ans = "YES";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(book[i]+book[j]== target)
            return ans;
        }
    }
    ans = "NO";
    return ans;
}
