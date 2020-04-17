#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k, s;
    cin >> m >> n >> k >> s;
    int flag = true;
    char arr[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char ch = arr[i][j];

            if (s < k)
            {
                flag = false;
                break;
            }
            if (ch == '.')
                s -= 2;
            else if (ch == '*')
                s += 5;
            else
                break;
            if (j != n - 1)
                s -= 1;
        }
        //cout<<s<<endl;
    }
    if (flag)
        cout << "yes " << endl << s;
    else
        cout << "no" << endl;
    return 0;
}
