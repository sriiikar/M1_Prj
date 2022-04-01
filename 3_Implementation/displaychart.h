// Calculating position of dice

#include<stdio.h>
#include<stdlib.h>

void displaychart(int curp,char player[4])
{	int i,j,t,c,sft=0,diceres,pos1,pos2;
	
		
		if(curp==100)
		{
			printf("*****Congratulations*****\n\n\nPlayer %s wins\n",player);
			printf("Thank you for playing!!");
			scanf("%*s");
			exit(0);
		}
	
	for(i=10;i>0;i--)
	{
		t=i-1;
		if((sft%2)==0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
				diceres=(i*j)+(t*c++);
				
				if(curp==diceres)
					printf("%s\t",player);
				else
				printf("%d\t",diceres);
		
			}
			sft++;
		}
		else
		{
			c=9;
			for(j=1;j<=10;j++)
			{
				diceres=(i*j)+(t*c--);
				
				if(curp==diceres)
					printf("%s\t",player);
				else
					printf("%d\t",diceres);
			}
		
			
			sft++;
		}
		printf("\n\n");
	}

	

	printf("--------------------------------------------------------------------------\n");
}