#include<bits/stdc++.h>
using namespace std;

void swapo(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int parti(int arr[], int l, int h)
{
    int pv = arr[h];
    int i,j;
    i = l-1; j = l;
    while(j<h)
    {
        if(arr[j]<=pv)
        {
            i++;
            swapo(&arr[i],&arr[j]);
            j++;
        }
        else
            j++;
    }
    swapo(&arr[++i], &arr[h]);
    return i;
}

void qs(int arr[], int l, int h)
{

    if(l<h)
    {
        int pv = parti(arr, l, h);
        qs(arr, l, pv-1);
        qs(arr, pv+1, h);
    }
}




int main()
{
    int arr[5] ={5,10,2,1,50};
    qs(arr,0,4);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    return 0;
}
