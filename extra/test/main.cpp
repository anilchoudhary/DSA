#include <iostream>
#include<limits>
using namespace std;

int main()
{
   int n;
   cout <<"Enter the number of elements in an array : ";
   cin >> n;
   int p[n];
   cout << "Enter the elements in an array : \n";
   for(int i = 0;i < n; i++)
    cin >> p[i];
    int m[n-1][n-1] = {0};
    int min, q;
    for(int d = 1; d < n - 1; d++)
    {
        for (int i = 0; i < n-d; i++)
        {
            int j = i+d;
            min = INT_MAX;

            for (int k = i; k <= j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i] * p[k+1] * p[j+1];

                if (q < min)
                 min = q;
            }
            m[i][j] = min;
        }
    }
    cout << m[0][n-2];
    return 0 ;

}
