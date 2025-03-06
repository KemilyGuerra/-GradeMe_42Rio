#include <unistd.h>

int main(void)
{
	char i = '9';

	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}

	char newline = '\n';
	write(1, &newline, 1);

	return (0);
}



