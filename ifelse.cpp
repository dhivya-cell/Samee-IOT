#include<iostream>
using namespace std;
int main()
{
float bs,gs,hra,da;
cout<<"\n enter your basic salary:";
cin>>bs;
if (bs<15000)
{
hra=bs*10/100;
da=bs*90/100;
}
else
{
hra=5000;
da=bs*98/100;
}
gs=bs+hra+da;
cout<<"\n basic salary:"<<bs;
cout<<"\n hra salary:"<<hra;
cout<<"\n da salary:"<<da;
cout<<"\n .....";
cout<<"\n gross salary:"<<gs;
}


