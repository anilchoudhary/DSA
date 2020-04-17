#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int *p)
{
    for (int i = 3; i <= 1000000; i += 2)
        p[i] = 1;

    for (long long int i = 3; i <= 1000000; i += 2)
    {
        if (p[i] == 1)
        {
            for (long long int j = i * i; j <= 1000000; j += i)
                p[j] = 0;
        }
    }
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main()
{
    int p[1000005] = {0};
    prime_sieve(p);

    int sum[1000005] = {0};
    for (int i = 1; i <= 1000000; i++)
    {
        sum[i] = sum[i - 1] + p[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << sum[b] - sum[a - 1] << endl;
    }
    return 0;
}
