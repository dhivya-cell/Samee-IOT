#include<iostream>
using namespace std;
int main()
{
int marks;
char na[5];
cout<<"enter the marks details\n";
cin>>marks;
cout<<"enter your name\n";
cin>>na;
if(marks>450)
{
cout<<na;
cout<<"you can choose bio maths"<<endl;
}
else if (marks>400)
{
cout<<"you can choose science group";
if (marks<400)
{
cout<<"you can choose either computer or commerce";
}
}
else
{
cout<<"invalid mark details";
}
}

