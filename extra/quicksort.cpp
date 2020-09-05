#include <iostream>
using namespace std;
int partition(int a[], int lb, int ub);
void Quicksort(int a[], int lb, int ub);

int main()
{
    int n;
    n = 5;
    // cout <<"Enter the number of elements : ";
    // cin >> n;
    int a[n] = {45, 2, 12, 76, 1};
    // for(int i = 0;i<n;i++)
    //     cin >> a[i];


    Quicksort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

int partition (int a[], int n, int lb, int ub)
{
    lb = 0, ub = n - 1;
    int start = 0, end = n - 1;
    int pivot = a[lb];
    while (start < end)
    {
        if (a[start] <= pivot)
            start++;

        if (a[end] > pivot)
            end--;

        if (start < end )
        {
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    int x = pivot;
    pivot = a[end];
    a[end] = pivot;

    return end;

}
void Quicksort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        Quicksort(a, lb, loc - 1);
        Quicksort(a, loc + 1, ub);
    }
}

