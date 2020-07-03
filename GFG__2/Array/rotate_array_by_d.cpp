void rotateArr(int arr[], int d, int n) {
    // code here
    int i = 0, j = d - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++; j--;
    }
    i = d; j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++; j--;
    }
    i = 0; j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++; j--;
    }
}