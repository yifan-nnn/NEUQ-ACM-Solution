#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[55];
	a[1]=1,a[2]=2,a[3]=4;
	for(int i=4;i<=50;i++)
	{
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	int n;
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	return 0;
}
