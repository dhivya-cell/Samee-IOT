#include<stdio.h>
#include<conio.h>
int main()
{
char letter;
printf("\n\n\n Enter anything");
scanf("%c",&letter);
if(letter>='a'&&letter<='z')
{
printf("it is a small letter");
}
else if(letter>='A'&&letter<='z')
{
printf("it is a small letter");
}
else if(letter>='o'&&letter<='9')
{
printf("it is number");
}

getch();

}


