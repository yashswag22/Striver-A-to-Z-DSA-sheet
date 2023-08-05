#include<vector>

int getSingleElement(vector<int> &arr){
	
	for(int i=0;i<arr.size();i++)
	{
		if(i%2==0)
	    if(arr[i+1]!=arr[i])
		return arr[i];

		if (i%2!=0)
		if(arr[i-1]!=arr[i])
		return arr[i];
	}	
}
