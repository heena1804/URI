#include<iostream>
using namespace std;
int main()
{
    int i,g,i1,g1,r;
    int gs=0;
    int is=0;
    int count=0;
    int draw=0;
while(true)
{
    cin>>i>>g;
    cout<<"Novo grenal (1-sim 2-nao)"<<"\n";
    cin>>r;
 
 
    if(i>g)
    is++;
    else if(i<g)
    gs++;
    else
    draw++;
    count++;
        if(r!=1)
    {
    cout<<count <<" grenais"<<"\n";   
    cout<<"Inter:"<<is<<"\n";
cout<<"Gremio:"<<gs<<"\n";
cout<<"Empates:"<<draw<<"\n";
if(is>gs)
cout<<"Inter venceu mais"<<"\n";
else
cout<<"Gremio venceu mais"<<"\n";
break;
    }
}
return 0;
}
