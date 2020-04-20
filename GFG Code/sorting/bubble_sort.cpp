#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int flag = 0;
    int arr[n] = {518, 456, 195, 281, 356, 140, 97, 04, 80, 67};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j + 1 < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
        flag = 0;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
