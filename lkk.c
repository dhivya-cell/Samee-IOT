#include <stdio.h>
int main ()
{

  int a,b,c=0;
  printf("Enter A:");
  scanf("%d",&a);
  printf("EnterB;");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf ("%d",a);
  
  printf("%d",b);
 
 }

