#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *s1, const char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
int main(void)
{
	char scr[] = "Hello World!";
	char dst[15];

	ft_strcpy(dst, scr);
	printf("%s\n", dst);

	strcpy(dst, scr);
	printf("%s\n", dst);
	return (0);
}
