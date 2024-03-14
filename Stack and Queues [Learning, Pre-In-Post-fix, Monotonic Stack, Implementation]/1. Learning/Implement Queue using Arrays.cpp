class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		arr[rear] = e;
		rear++;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		if(rear<=front) return -1;
		else{
			int temp = arr[front];
			front++;
			return temp;
		}
	}
};
