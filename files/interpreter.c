#include "monty.h"
/**
 * main - run the program
 * Return: 0.
 */
int line_number = 1;
int main(int ac, char **av)
{
	int fd, sz;
	char *file;
	char* c = (char*)calloc(100, sizeof(char));
	instruction_t instructs[] = {{"push", push}, {"pall", pall}}; 

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = av[1];
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	sz = read(fd, c, 10);
	 printf("called read(% d, c, 10). returned that"
           " %d bytes were read.\n",
           fd, sz);
	c[sz] = '\0';
	printf("Those bytes are as follows: %s\n", c);
	printf("______________________\n");
	fprintf(stderr, "L%i: unknown instruction %s\n", line_number, instructs->opcode);
	exit(EXIT_FAILURE);
}
