int main()
{

	char dest[] = "hola";
	char src[] = "adios";
	//int x = 6;
	unsigned int i = ft_strlcpy(dest, src, 5);
	printf("%i", i);
	return (0);
}
