#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b) {
    int temp;
    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int result = arr[0];
        for(int i=1; i<n; i++) {
        result = gcd(result, arr[i]);
    }
    cout << result << endl;


    }
    return 0;
}
