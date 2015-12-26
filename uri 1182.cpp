#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;
	int l,i,j;
	double n;
	double sum=0.0;
	cin>>l;
	cin>>ch;
	for(i=0;i<12;i++)
	{
		for(j=0;j<12;j++)
		{
			cin>>n;
			if(j==l)
			sum+=n;
		}
}
	cout<<fixed<<setprecision(1);
	if(ch=='S')
	cout<<sum<<"\n";
	else if(ch=='M')
	cout<<sum/12<<"\n";
	return 0;
}
