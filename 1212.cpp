#include<iostream>
using namespace std;
long int carry(int x,int y)
{
	long int a,b,c;
	c=0;
	int t=0;
	while(1)
	{
		a=x%10;
		b=y%10;
		x=x/10;
		y=y/10;
		if(a+b+c>=10) 
		{
			t++;
			c=1;
		}
		else c=0;
		if(x==0 && y==0) break;
	}
	return t;
}
int main()
{
	int x,y,c;
	while(1)
	{
		cin>>x>>y;
		if(x==0 && y==0) break;
		c=carry(x,y);
		if(c==0) cout<<"No carry operation."<<endl;
		else if(c==1) cout<<"1 carry operation."<<endl;
		else cout<<c<<" carry operations."<<endl;
	}
	return 0;
}
