#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int *arr = new long long int[n];
    long long int sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    long long int total_sum = n*(n+1)*0.5;
    //cout<<total_sum<<" " <<sum<<endl;
    cout<<total_sum - sum;
    return 0;

}
