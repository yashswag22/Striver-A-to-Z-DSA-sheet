class Stack {
    
public:
    int toppoint;
    int *arr;
    int size;
    
    Stack(int capacity) {
        size = capacity;
        toppoint = -1;
        arr= new int[size];
    }

    void push(int num) {
        if(toppoint != size-1)
        {
            toppoint++;
            arr[toppoint] = num;
        }

    }

    int pop() {
        if(toppoint!=-1){
            int temp = arr[toppoint];
           toppoint--;
            return temp;
        }
        else
        return -1;
    }
    
    int top() {
       if(toppoint != -1)
       return arr[toppoint];
       else
       return -1;
    }
    
    int isEmpty() {
        if(toppoint == -1) return 1;
        else return 0;
    }
    
    int isFull() {
       if(toppoint ==size-1) return 1;
       else return 0;
    }
    
};
