int	ft_str_is_numeric(char *str)
{
	if (str == '\0')
		return (0);
	while (str != '\0')
	{
		if (str < 0 || str > 0)
		{
			return (1);
		}
		str++;
	}
	return (0);
}


int main()
{
	int i = 345;
	printf("%c",ft_str_is_numeric("sfsd"));
}
