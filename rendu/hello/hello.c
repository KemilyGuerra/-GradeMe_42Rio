#include <unistd.h>

int main()
{
	char n;
	n = 0;

	write(1, "Hello World", 11);
	write(1, "\n", 1);

	return (0);
} 
