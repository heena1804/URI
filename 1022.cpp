#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t,N1,N2,D1,D2,n,d,g;
    char a,b,o;
    cin>>t;
    while(t--)
    {
        cin>>N1>>a>>D1>>o>>N2>>b>>D2;
        if(o=='+') 
        {
            n=(N1*D2 + N2*D1);
            d=(D1*D2);
            g=__gcd(n,d);
            cout<<n<<"/"<<d<<" = "<<n/g<<"/"<<d/g<<endl;
        }
        else if(o=='-')
        {
            n=(N1*D2 - N2*D1);
            d=(D1*D2);
            g=__gcd(n,d);
            if(n<0) cout<<n<<"/"<<d<<" = "<<'-'<<abs(n/g)<<"/"<<abs(d/g)<<endl;
            else cout<<n<<"/"<<d<<" = "<<n/g<<"/"<<d/g<<endl;
             
        }
        else if(o=='*')
        {
            n=(N1*N2);
            d=(D1*D2);
            g=__gcd(n,d);
            cout<<n<<"/"<<d<<" = "<<n/g<<"/"<<d/g<<endl;
        }
        else if(o=='/')
        {
            n=(N1*D2);
            d=(N2*D1);
            g=__gcd(n,d);
                cout<<n<<"/"<<d<<" = "<<n/g<<"/"<<d/g<<endl;
        }
    }
    return 0;
}
