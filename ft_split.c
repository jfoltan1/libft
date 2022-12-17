#include <stdlib.h>
char **ft_split(char const *s, char c)
{
	int	a;
	int 	i;
	int	b;
	char **ptr;
	
	i = 0;
	a = 0;
	b = 0;
	**ptr = (char **)malloc(sizeof(s));
	while(s[i])
	{
		if(s[i] != (const char)c)
		{
			ptr[a][b] = s[i];	
		i++;
		b++;
		}
		else if(s[i] == (const char)c)
		{
		a++;
		b = 0;
		}
	}	  

	return(**ptr);
}
#include <stdio.h>
int main()
{
	const char s[] = "HELLO";
	char c = 0;
	printf("%s", ft_split(s,c));
}
