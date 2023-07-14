#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", (int)sizeof(char));
printf("Size of a int: %d byte(s)\n", (int)sizeof(int));
printf("Size of a long: %d byte(s)\n", (int)sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", (int)sizeof(long long));
printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
return (0);
}
