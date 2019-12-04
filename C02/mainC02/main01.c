char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char dest[] = "hol";
	char src[] = "adauihi";
	printf("%s\n", dest);
	ft_strncpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}
