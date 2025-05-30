#include<iostream>
using namespace std;
int main()
{
int pin=1234,choice;
int balance=1000,amount;
cout<<"welcome to the ATM\n";
cout<<"please enter your pin:";
cin>>pin;
if(pin==pin)
{
cout<<"\n 1.check balance\n2.deposit\n3.withdraw\n4.exit\n";
cout<<"enter your choice";
cin>>choice;
if(choice==1)
{
cout<<"your current balance is $"<<balance<<endl;
}
else if(choice==2)
{
cout<<"enter amount to deposit";
cin>>amount;
if (amount>0)
{
balance+=amount;
cout<<"deposited successfully. new balance is $"<<balance<<endl;
}
else
{
cout<<"invalid deposit amount.\n";
}
}
else if (choice==3)
{
cout<<"enter amount to withdraw:";
cin>>amount;
if (amount>0&&amount<=balance)
{
balance=amount;
cout<<"withdraw successful,Remaining balance is $"<<balance<<endl;
}
else
{
cout<<"invalid or insufficient funds\n";
}
}
else if(choice==4)
{
cout<<"thank you for using the ATM good bye!\n";
}
else
{
cout<<"\n valid choice,please try again \n";
}
}
else
{
cout<<"incorrect pin.please try again \n";
}
}

