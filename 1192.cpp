#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        char ch;
        cin>>a>>ch>>b;
        if(ch>64 && ch<91 && a!=b) cout<<b-a<<endl;
        else if(a==b) cout<<a*b<<endl;
        else  cout<<a+b<<endl;
    }
    return 0;
}
