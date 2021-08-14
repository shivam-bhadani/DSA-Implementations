class Queue
{
private:
    int size;
    int cap;
    int *arr;
public:
    Queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isFull()
    {
        return (size==cap);
    }
    bool isEmpty()
    {
        return (size==0);
    }
    void enque(int x)
    {
        if(isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        arr[size] = x;
        size++;
    }
    void deque()
    {
        if(isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }
        for(int i=0; i<size-1; i++)
            arr[i] = arr[i+1];
        size--;
    }
    int size()
    {
        return size;
    }
    int front()
    {
        if(isEmpty())
        {
            cout << "Queue is empty";
            return -1;
        }
        return arr[0];
    }
    int rear()
    {
        if(isEmpty())
        {
            cout << "Queue is empty";
            return -1;
        }
        return arr[size-1];
    }
};
