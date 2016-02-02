#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		float sum=0;
		float count=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		 } 
		 float avg=sum/n;
		 for(int i=0;i<n;i++)
		 {
		 	if(a[i]>avg) count++;
		 	}
		 	float ans=(count/n)*100;
		 	cout<<fixed<<setprecision(3);
			 cout<<ans<<"%"<<endl;
		
	} 
	return 0;
}
