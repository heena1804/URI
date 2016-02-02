#include<iostream>
#include<cmath>
using namespace std;
bool isprime(unsigned long n)
{
	if(n==2) return true;
	if(n<2 || n%2==0) return false;
	for(unsigned long i=3;i<=sqrt(n);i++) 
	{
		if(n%i==0) return false;
	}
	return true;
	
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(isprime(n)) cout<<"Prime"<<endl;
		else cout<<"Not Prime"<<endl;
	}
	return 0;
}
