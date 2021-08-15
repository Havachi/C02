#include  <stdio.h>
int	ft_str_is_numeric();

int	main(int douce, char **patate)
{
	if(douce > 1)
	{
		int i = 1;
		printf("C02 - EX03 TEST\n");
		printf("No.\tInput\tOutput \n");
		while(i < douce)
		{
			int out; 
			out = ft_str_is_numeric(patate[i]);
			printf("%d. %s|\t%d\n",i, patate[i],out); 	
			i++;
		}
	}
}
