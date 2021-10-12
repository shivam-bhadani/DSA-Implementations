class MinHeap
{
private:
    int *arr;
    int size;
    int cap;
public:
    MinHeap(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    int left(int i)
    {
        return (2*i + 1);
    }
    int right(int i)
    {
        return (2*i + 2);
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    void insert(int x)
    {
        if(size==cap) return;
        size++;
        arr[size-1] = x;
        int i = size-1;
        while(i!=0 && arr[parent(i)]>arr[i]) {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    int minHeapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int small = i;
        if(l<size && arr[l]<arr[i]) small = l;
        if(r<size && arr[r]<arr[i]) small = r;
        if(small!=i)
        {
            swap(arr[small], arr[i]);
            minHeapify(small);
        }
    }
    int extractMin()
    {
        if(size==0) return INT_MAX;
        if(size==1) {
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }
    void decreaseKey(int i, int x)
    {
        arr[i] = x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }
    void deleteKey(int i)
    {
        decreaseKey(i, INT_MIN);
        extractMin();
    }
};
