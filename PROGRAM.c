#include<stdio.h>
#include <math.h>
int main()
{

float n=0;
float below=0;
float above=0;
float result;

printf("Enter N Value");
scanf("%f",&n);


above=(n*pow(n+1,2));

below=n*2;

result=above/below;


printf("The Answer %f",result);




}

