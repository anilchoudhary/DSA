#include<bits/stdc++.h>
using namespace std;

int countpf(int n)
{
    vector<int> arr;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        arr.push_back(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            arr.push_back(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        arr.push_back(n);
    //cout<<arr.size()<<endl;
    return arr.size();
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,l,flag=0;
        cin>>x>>k;

        l = countpf(x);

        if(l>=k)
            flag = 1;

        if(flag)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
        flag = 0;
    }
    return 0;
}
