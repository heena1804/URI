#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int x[n];
	
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int small=x[0];
	int loc=1;
	for(i=0;i<n;i++)
	{
		if(x[i]<small)
		{
			small=x[i];
			loc=i;
		}
		
	}
	cout<<"Menor valor: "<<small<<"\n";
cout<<"Posicao: "<<loc<<"\n";
}
