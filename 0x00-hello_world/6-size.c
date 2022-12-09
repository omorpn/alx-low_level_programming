#include <stdio.h>
/**
 *main - function desciption
 *
 *Return: always return 0 on this progarm
*/
int main(void)
{
	printf("Size of char: %ld bytes\n", sizeof(char));
	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of long int: %ld bytes\n", sizeof(long int));
	printf("Size of long long int: %ld byte\n", sizeof(long long int));
	printf("Size of long float: %ld bytes\n", sizeof(float));
	return (0);
}
