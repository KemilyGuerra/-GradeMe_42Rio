#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int nbr);

int main(int argc, char **argv)
{
    printf("%s\n", ft_itoa(atoi(argv[1])));
    return (0);
}