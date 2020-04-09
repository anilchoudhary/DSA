#include<bits/stdc++.h>
using namespace std;

typedef pair<long long int, int> p;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<p> pos;

        pos.push_back(p(-1, 0));

        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            x = fabs(x);
            if (x % 4 == 0) pos.push_back(p(i, 0));
            else if (x % 4 == 2) pos.push_back(p(i, 1));
        }

        pos.push_back(p(n, 0));


        long long int ans = (n * (n + 1))/2;
        int len = pos.size();
        for (int i = 1; i < len-1 ; i++)
        {
            if (pos[i].second == 0) continue;
            long long int tmp = (pos[i].first - pos[i - 1].first);
            tmp *= (pos[i + 1].first - pos[i].first);
            ans -= tmp;
        }
        cout << ans <<endl;
    }

    return 0;
}
