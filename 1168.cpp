#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') sum+=2;
            else if(s[i]=='7') sum+=3;
            else if(s[i]=='2' || s[i]=='3' || s[i]=='5' ) sum+=5;
            else if(s[i]=='4') sum+=4;
            else if(s[i]=='6' || s[i]=='9' || s[i]=='0') sum+=6;
            else if(s[i]=='8') sum+=7;
             
             
        }
        cout<<sum<<" "<<"leds"<<endl;
    }
    return 0;
}
