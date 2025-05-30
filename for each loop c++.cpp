#include<iostream>
using namespace std;
int main()
{
char ms,gen;
int age;
cout<<"\n enter marital status:M as married|U as unmarried:";
cin>>ms;
if(ms=='M'||ms=='m')
{
cout<<"you are eligible for insurance";
}
else if(ms=='U'||ms=='U')
{
cout<<"\n enter gender:M as male|F as female:";
cin>>gen;
cout<<"\n enter age:";
cin>>age;
if(((gen=='M'||gen=='m')&&age>=30)||((gen=='F'||gen=='f')&&age>=25)))
{
cout<<"\n your are eligible for insurance";
}
}
}


