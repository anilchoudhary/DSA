// Generate power set

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abc";
    int n = str.length();
    int count = (1 << n);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < n; j++)
            if ((i & (1 << j)))
                cout << (str[j]);
        cout << endl;
    }
}
