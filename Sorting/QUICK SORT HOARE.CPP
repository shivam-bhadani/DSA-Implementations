void quickSort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p = partition(arr, l, h);
        quickSort(arr, l, p);
        quickSort(arr, p+1, h);
    }
}

int partition(int arr[], int l, int h)
{
    srand(time(NULL));
    int random = l + rand() % (h - l);
    swap(arr[random], arr[l]);

    int pivot = arr[l];
    int i=l-1, j=h+1;
    while(true)
    {
        do{
            i++;
        } while(arr[i]<pivot);

        do{
            j--;
        } while(arr[j]>pivot);

        if(i>=j) return j;
        swap(arr[i], arr[j]);
    }
}
