#include<bits/stdc++.h>
using namespace std;

int countDivisors(int n)
{
    int cnt = 0;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                cnt += 1;

            else // Otherwise print both
                cnt += 2;
        }
    }
    return cnt;
}


int countpf(int n)
{

    set<int> s;
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        s.insert(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            s.insert(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        s.insert(n);

    return s.size();
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,y,l,flag=0;
        cin>>x>>k;
        for(int i=1;i<=100000;i++)
        {
            y = countDivisors(i);
            l = countpf(i);

            //cout<<y<<" "<<l<<endl;

            if((x==y) && (l==k))
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
        flag = 0;
    }
    return 0;
}
