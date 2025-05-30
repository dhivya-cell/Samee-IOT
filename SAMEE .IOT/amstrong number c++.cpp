#include<iostream>
using namespace std;
int main()
{
int n,r,t,sum=0;
cout<<"enter the number";
cin>>n;
t=n;
while(n>0)
{
r=n%10;
sum=sum+(r&r&r);
n=n/10;
}
if(sum==t)
{
cout<<"amstrong number";
}
else
{
cout<<"not an amstrong number";
}
return 0;
}

