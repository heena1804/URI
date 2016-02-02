#include<stdio.h>
#include<string.h>
long long int fact[21];
long long int factorial(long long int n)
{
	if(fact[n]!=0) return fact[n];
	if(n<=0) fact[n]=1;
	else
	fact[n]=n*factorial(n-1);
	return fact[n];
}
int main()
{
	long long int a,b;
	memset(fact,0,sizeof(fact));
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
		printf("%lld\n",factorial(a)+factorial(b));
	}
	return 0;
}
