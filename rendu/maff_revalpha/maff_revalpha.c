#include <unistd.h>
int main(void)
{
	int i;
	i = 0;
	char str[] = "zyxwvutsrqponmlkjihgfedcba";

	while(str[i] >= 'a' && str[i] <= 'z') 
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
