class Stack
{
private:
    int *arr;
    int cap;
    int top;
public:
    Stack(int c)
    {
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x)
    {
        if(top==cap-1) {
            cout << "Stack Overflow" << endl;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if(top==-1) {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        return arr[top--];
    }
    int peek()
    {
        if(top==-1) {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        return arr[top];
    }
    int size()
    {
        return (top+1);
    }
    bool isEmpty()
    {
        return (top==-1);
    }
};
