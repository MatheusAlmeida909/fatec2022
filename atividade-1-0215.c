#include <stdio.h>
int main(){
    int num1, num2, num3;
    
    printf("num1: ");
    scanf("%i", &num1);
    
	printf("num2: ");
	scanf("%i", &num2);
	
	printf("num3: ");
	scanf("%i", &num3);
    
    if(num1 < num2 && num1 < num3)
    {
    	if(num2 < num3)
		{
    		printf("%i, %i, %i", num1, num2, num3);
		}
		else
		{
			printf("%i, %i, %i", num1, num3, num2);
		}
	}
	else
	{
		if(num2 < num1 && num2 < num3)
		{
			if(num1 < num3)
			{
				printf("%i, %i, %i", num2, num1, num3);
			}
			else
			{
				printf("%i, %i, %i", num2, num3, num1);
			}
		}
		else
		{
			if (num1 < num2)
			{
				printf("%i, %i, %i", num3, num1, num2);
			}
			else
			{
				printf("%i, %i, %i", num3, num2, num1);
			}
		}
	}
    
    
	return 0;
}
