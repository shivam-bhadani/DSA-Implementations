class Queue
{
private:
    int *arr;
    int front, cap, size;
public:
    Queue(int c)
    {
        cap = c;
        front = 0;
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
    int getFront()
    {
        if(isEmpty()) {
            cout << "Queue is empty";
            return -1;
        }
        return arr[front];
    }
    int getRear()
    {
        if(isEmpty()) {
            cout << "Queue is empty";
            return -1;
        }
        return arr[(front+size-1)%cap];
    }
    void deque()
    {
        if(isEmpty()) {
            cout << "Queue Underflow" << endl;
            return;
        }
        front = (front+1)%cap;
        size--;
    }
    void enque(int x)
    {
        if(isFull()) {
            cout << "Queue Overflow" << endl;;
            return;
        }
        int rear = (front+size-1)%cap;
        rear = (rear+1)%cap;
        arr[rear] = x;
        size++;
    }
};
