#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    while(true)
    {
            sum=0;
        cin>>n;
        if(n==0) break;
    else    if(n%2!=0) n++;
        for(int i=0;i<5;i++,n+=2)
        {
            sum+=n;
        }
        cout<<sum<<"\n";
     
    }
}
