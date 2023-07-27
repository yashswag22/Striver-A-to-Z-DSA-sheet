/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	int pivot = input[start];
	int i=start;
	int j= end;
	while(i<j)
	{
		while(input[i]<=pivot && i<= end)
		{
			i++;
		}
		while(input[j]>pivot && j>= start)
		j--;
		if(i<j)
		swap(input[i],input[j]);

	}
	swap(input[start],input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	
	if(start<end)
	{
		int pindex = partitionArray(input,start,end);
		quickSort(input,start,pindex-1);
		quickSort(input,pindex+1,end);
	}
}
