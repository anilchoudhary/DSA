#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int x=1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]<=2)
                x++;
			else
            {
				if (x > maxi)
					maxi = x;
				if (x < mini)
					mini = x;
				x = 1;
			}
		}
		if (x > maxi)
			maxi = x;
		if (x < mini)
			mini = x;
        cout<<mini<<" "<<maxi<<"\n";
    }
    return 0;
}
