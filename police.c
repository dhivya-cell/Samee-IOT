#include<stdio.h>
int main()
{

	int age,height,qua=0;
	
	char name[100];
	
	
	printf("Enter Name");
	gets(name);
	
	
	printf("/nEnter Age ");
	scanf("%d",&age);
	
	if(age>=18)
	
		
			printf("/nEnter Height ");
			scanf("%d",&height);
			
			if(height>=165)
			{
			
				printf("/nEnter Quallification ");
				scanf("%d",&qua);
				
				if(qua==10 || qua==11 || qua==12)
				{
				
					printf("You are eligible to apply for this job");	 
				}
				else
				{
					printf("Your Quallification is not enough");
				}
			}
			else
			{
			
				printf("Your height is not enough");
			}
	
	}
	else
	{
		printf("You are not old enough");
	}
	


}

