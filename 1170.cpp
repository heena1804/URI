#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float n;
		cin>>n;
		int count=0;
		while(n>1)
		{
			n=n/2;
			count++;
		}
		cout<<count<<" dias"<<endl;
	}
	return 0;
}
