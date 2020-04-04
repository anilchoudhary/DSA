#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

const int MAX = 100;


void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;

        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }

        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }

        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
        }

        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
        }
    }


int main()
{
	int a[R][C] = { { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 } };
	spiralPrint(R, C, a);
	return 0;
}
