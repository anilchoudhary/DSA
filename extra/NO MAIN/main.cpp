    #include <bits/stdc++.h>
    using namespace std;
    int main() {

        int t;
        cin >> t;
        while(t--)
        {
            long long n,c=0;
			cin>>n;
			while(n!=1)
				{
					c++;
					n=n/2;
				}
				
			if(c == 0) cout<<0<<endl;
			else if(c == 1) cout<<1<<endl;
			else if(c ==2) cout<<2<<endl;
			else
			{
				c = c-3;
				if(c%4==0)
				cout<<"3"<<endl;
				else if(c%4==1)
				cout<<"0"<<endl;
				else if(c%4==2)
				cout<<"9"<<endl;
				else if(c%4==3)
				cout<<"2"<<endl;
			}
			
		
		}
    return 0;
    }
