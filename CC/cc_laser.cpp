#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
	{
	    int n,q,x1,x2,y;
	    cin>>n>>q;
	    int arr[n],px[n],py[n],ls[n-1][2],le[n-1][2];
	    int k = 0, l = 0;
	    for (int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        px[i] = i+1;
	        py[i] = arr[i];
	        if(i != 0 && i != n-1)
			{
		        le[l][0] = px[i];
		        le[l][1] = py[i];
		        l++;
		        ls[k][0] = px[i];
		        ls[k][1] = py[i];
		        k++;
	        }
	        else if(i == 0)
			{
		        ls[k][0] = px[i];
		        ls[k][1] = py[i];
		        k++;
	        }
	        else if(i == n-1)
			{
		        le[l][0] = px[i];
		        le[l][1] = py[i];
		        l++;        
			}
	    }
    
	    for(int j=0;j<q;j++)
		{
		    cin>>x1>>x2>>y;
		    int count = 0;
		    float height,h,l,slope,newpoint;
		    for(int i = 0;i<n-1;i++)
			{
		        if((y >= ls[i][1] && y <= le[i][1]) || (y <= ls[i][1] && y >= le[i][1]))
				{
		            if(x2 != ls[i][0] && x1 != le[i][0])
					{
			            height = y - ls[i][1];
			            h = le[i][1] - ls[i][1];
			            l = le[i][0] - ls[i][0];
			            slope = l/h;
			            newpoint = ls[i][0] + slope*height;
			            if((x1 <= newpoint && x2 >= newpoint) || (x1 >= newpoint && x2 <= newpoint))
						{
			            	count++;
			            }
		            }
		        }
		    }
		    cout<< count<<"\n";
	    }
	}
return 0;
}
