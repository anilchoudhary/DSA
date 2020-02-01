#include<bits/stdc++.h>
using namespace std;

int main(){
	bool flag = true;
	int n;
	cin>>n;
	if(n==0||n==1)
		flag = false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			flag = false;
	}
	if(flag)
		cout<<n<<" is prime number";
	else
		cout<<n<<" is not prime number";
	return 0;
}
