#include "monty.h"
/**
 * main - main function.
 * @ac: argument count
 * @av: argument vector
 * Return: on succed 0, on failure EXIT_FAILURE
 */
int main(int ac, char **av)
{
	FILE *fd;

	if (ac != 2)
		argument_err();
	fd = fopen(av[1], "r");
	if (fd == NULL)
		file_err(av[1]);
	exec_file(fd);
	return (0);
}
