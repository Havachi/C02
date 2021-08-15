#include <stdio.h>
char	*ft_strupcase(char *str);

int	main(int ac, char **av)
{
	if(ac > 1)
	{
		int	i;
		i = 1;
		printf("C02 - ex07 test\n");
		printf("No.\tInput\tOutput\n");
		while(i < ac)
		{
			char *out;
			char *in;
			in = av[i];
			printf("%d\t%s\t", i, in);
			out = ft_strupcase(av[i]);
			printf("%s\n", out);
			i++;	
		}
	}
}
