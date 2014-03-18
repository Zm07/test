#include "stdio.h"

int dom(int a, int b)
{
	int i,j,k;
	
	if(b%2==0)
	{
		//скаты по две точки на крыше	
		for(i=0; i<b/2-1; i++)
		{
			printf(" ");
	
			for(j=0; j<b/2-1-i; j++)
			{
				printf("  ");
			}
		
			printf(". ");
		
			for(k=0; k<2*i/*2*i+1*/; k++)
			{
				printf("  ");
			}
			printf(". \n");
		}
	}
	else
	{
		printf(" ");
		//одна точка на вершине
		for(j=0; j<b/2; j++)
			{
				printf("  ");
			}
		printf(".\n");
		
		//скаты по две точки на крыше	
		for(i=0; i<b/2-1; i++)
			{
				printf(" ");
	
				for(j=0; j<b/2-1-i; j++)
					{
						printf("  ");
					}
		
				printf(". ");
		
				for(k=0; k<2*i+1; k++)
					{
						printf("  ");
					}
				printf(". \n");
			}
	}


	//Дом
	printf(" ");
	for(i=0; i<b; i++){
		printf(". ");
	}
	printf("\n");
	
	for(i=0; i<a; i++)
	{
		printf(" . ");
			
		for(j=0; j<b-2; j++)
			{
				printf("  ");
			}
		printf(".\n");
	}
	printf(" ");
	for(i=0; i<b; i++){
		printf(". ");
	}
		printf("\n");
	
	return 0;
}

