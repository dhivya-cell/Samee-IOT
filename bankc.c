#include<stdio.h>
int main()
{
int balance,withdraw,deposit,no;
balance=20000;
printf("\n 1. balance ,\n2. deposit ,\n3.withdraw");
printf("\n choose any no");
scanf("%d",&no);
switch(no)
{
case 1:
printf("\n balance=%d",balance);
break;
case 2:
printf("enter your deposit amount");
scanf("%d",&deposit);
balance=balance+deposit;
printf("\n balance=%d",balance);
break;
case 3:
printf("enter your withdraw amount");
scanf("%d",&withdraw);
if (balance>withdraw)
{
balance=balance-withdraw;
printf("\n remaining balance=%d",balance);
}
else
printf("\n not sufficient balance");
break;
default:
printf("\n not applicable");
break;
}
}

