#include<iostream>
using namespace std;
int main()
{
	int first=0;
	int second=1;
	int next,i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next;
		cout<<((i==n-1)?"\n":" ");
	}
}
