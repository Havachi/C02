char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' || str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else
		{
			str[i] += '0';	
		}
		i++;
	}
	return (str);
}
