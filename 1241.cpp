#include<iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		char s1[1001],s2[1002];
		cin>>s1>>s2;
		int count=0;
		for(j=strlen(s2),i=strlen(s1);j>=0;j--,i--)
		{
			if(s1[i]==s2[j]) count++;
			else break;
		}
		if(count == strlen(s2)+1) printf("encaixa\n");
          else printf("nao encaixa\n");
	}
	return 0;
}
