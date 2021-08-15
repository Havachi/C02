char	*ft_strcapitalize(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[0] >= 0x61 && str[0] <= 0x7A)
		{
			str[0] -= 32;
		}		
		if((str[i] < 0x30) ||
		( str[i] > 0x39 && str[i] < 0x41) ||
	       	(str[i] > 0x5A && str[i] < 0x61) ||
		(str[i] > 0x7A))
		{
			if(str[i+1] >= 0x61 && str[i+1] <= 0x7A)
			{
				str[i+1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
