#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,z,avg;
    b=0;
    z=0;
 
while(true) 
{
cin>>a;
if(a<0.0 || a>10.0)
cout<<"nota invalida"<<"\n";
else if(z==0)
{
    b=a;
    z=1;
}
 
else
{
    avg=(a+b)/2;
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<avg<<"\n";
    break;
}
 
}
return 0;
}
