#include<iostream>
using namespace std;
int main()
{
int n,c=0,i;
cout<<"\n enter the number";
cin>>n;
for(i=1;i<=100;i++)
{
for(i=1;i<=100;i++)
{
if(n%i==0)
c++;
}
if(c==2)
{
cout<<n<<"is a prime number";
}
else
{
cout<<n<<"is not a prime number";
}
c=0;
}
cout<<n<<endl;
return 0;
}

