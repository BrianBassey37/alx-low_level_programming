#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: the argument count
 * @argv: the array argument points to
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
