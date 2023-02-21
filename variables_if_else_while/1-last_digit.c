#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
**main - Entry point
*
**Return: Always 0 (success)
*/
int main(void)
{
int n, number;
srand(time(0));
n = rand() - RAND_MAX / 2;
number = n % 10;
if (number > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, number);
else if (number == 0)
printf("Last digit of %d is %d and is 0\n", n, number);
else if (n < 6 && number != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, number);
return (0);
}
