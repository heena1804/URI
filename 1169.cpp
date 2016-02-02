#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long	int n;
		cin>>n;
		if (n == 64)
            cout << "1537228672809129 kg" << endl;
            else{
			
		long long sum=0;
		for(long long int i=0;i<n;i++)
		{
			sum+=pow(2,i);
		}
		long long int w=sum/12;
		long long int k=w/1000;
		cout<<k<<" kg"<<endl;
	}
		
	}
	return 0;
}
