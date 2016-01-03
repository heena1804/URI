#include<iostream>
#include<algorithm>
#include<map>
#include<iomanip>
#include<cmath>
using namespace std;
map<int,int> m;
int main()
{
    int count=0;
    int n;
    bool flag=true;
    while(cin>>n && n!=0)
    {
        if(!flag) cout<<endl;
        flag=false;
        int i,x,y;
         
        count++;
        double yy=0.0; double xx=0.0;
        m.clear();
        while(n--)
        {
            cin>>x>>y;
            xx+=x; yy+=y;
            if(m[y/x]!=0) m[y/x]+=x;
            else m[y/x]=x;
             
        }
        int l=m.size();
        int c=0;
       map<int,int>::iterator itr;
             
            cout<<"Cidade# "<<count<<":"<<endl;
            for(itr=m.begin();itr!=m.end();itr++)
            {
        cout<<itr->second<<"-"<<itr->first;
        if(c<l-1) cout<<" ";
        c++;
        }
    cout<<endl;
            cout<<"Consumo medio: ";
            cout<<fixed<<setprecision(2)<<floor((yy/xx)*100)/100;
             
            cout<<" m3."<<endl;
             
             
         
     
    }
    return 0;
}
