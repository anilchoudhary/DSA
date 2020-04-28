#include <bits/stdc++.h>

using namespace std;



int Partition(int A[], int p, int r)
{
    int x, i, t;
    x = A[r];
    i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
        }
    }
    t = A[i + 1];
    A[i + 1] = A[r];
    A[r] = t;
    return i + 1;
}

void quicksort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int A[n];
    cout << "Enter the array elements: ";

    for (int i = 0; i < n; i++)
        cin >> A[i];

    quicksort(A, 0, n - 1);


    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";


    return 0;
}
