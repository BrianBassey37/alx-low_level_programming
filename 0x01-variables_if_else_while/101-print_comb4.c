#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Task 1 print the last digit of the number stored in the variable n
*
*Return: 0
**/

int main(void)
{
int ch;
int n;
int m;

for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
for (m = 50; m <= 57; m++)
{
if (n > ch && m > n)
{
putchar(ch);
putchar(n);
putchar(m);
if (ch != 55 || n != 56 || m != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}

putchar(10);

return (0);
}
