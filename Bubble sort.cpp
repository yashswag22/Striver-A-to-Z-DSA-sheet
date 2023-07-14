void bubbleSort(vector<int>& arr, int n) {
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
