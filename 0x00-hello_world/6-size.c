#include <stdio.h>

/**
 * main - Enter
 *
 * Return: Always
 */
int main(void)
{	char charType;
	int intType;
	float floatType;
	long long  longlongInt;
	long longInt;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
