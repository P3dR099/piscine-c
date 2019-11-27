int		ft_str_is_lowercase(char *str)
{
	int is_lowercase;
	int i;

	is_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			is_lowercase = 0;
		}
		i++;
	}
	return (is_lowercase);
}

int main()
{
	char a = 'A';
        int b = ft_str_is_lowercase(a);
	printf("%c", b);
}
