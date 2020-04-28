#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int *p)
{
    for (int i = 3; i <= 10000; i += 2)
        p[i] = 1;

    for (long long int i = 3; i <= 10000; i += 2)
    {
        if (p[i] == 1)
        {
            for (long long int j = i * i; j <= 10000; j += i)
                p[j] = 0;
        }
    }
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main()
{
    int n;
    cin >> n;
    int p[100000] = {0};
    prime_sieve(p);
    for (int i = 0; i <= n; i++)
    {
        if (p[i] == 1)
            cout << i << " ";
    }
    return 0;
}
