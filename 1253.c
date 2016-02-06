#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 51
int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		char s[MAX];
		int n;
		scanf("%s",&s);
		scanf("%d",&n);
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]-n<'A') s[i]+=26-n; 
			else
			s[i]-=n;
		}
		printf("%s\n",s);
	}
	  return 0;
}
