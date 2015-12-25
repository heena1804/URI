#include<iostream>
using namespace std;
int main()
{
	int t,i,n;
	long long int f[61];
	f[0]=0;
	f[1]=1;
	for(i=2;i<61;i++)
	{
		f[i]=f[i-2]+f[i-1];
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<"Fib("<<n<<") = "<<f[n]<<"\n";
	}
	return 0;
}
