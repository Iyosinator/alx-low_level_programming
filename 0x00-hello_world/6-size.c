#include <stdio.h>

/**
 *  main - Entry point that tells me the size of data types
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	char mychar;
	int myint;
	long mylong;
	long long mylonglong;
	float myfloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(mychar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(mylong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(mylonglong));
	printf("Size of a float: %lu byte(s)\n", sizeof(myfloat));

	return (0);

}
