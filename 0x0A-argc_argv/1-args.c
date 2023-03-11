#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of args
 * @argc: argumant count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
