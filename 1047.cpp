#include<iostream>
using namespace std;
int main()
{
    int sh,sm,eh,em,rh,rm;
    cin>>sh>>sm>>eh>>em;
    rh = eh - sh;
 
    if (rh< 0)
 
    {
 
        rh = 24 + (eh - sh);
 
    }
 
    rm = em - sm;
 
    if (rm < 0)
 
    {
 
        rm = 60 + (em - sm);
 
        rh--;
 
    }
    if(sh==eh&&sm==em)
    {
            cout<<"O JOGO DUROU "<<24<<" HORA(S) E "<<0<<" MINUTO(S)"<<"\n";
    }
else
{
     
        cout<<"O JOGO DUROU "<<rh <<" HORA(S) E "<<rm<<" MINUTO(S)"<<"\n";
    }
    return 0;
}
