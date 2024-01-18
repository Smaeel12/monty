#include "monty.h"
/**
 * is_empty - check if the line is empty.
 * @s: string
 * Return: 0 if the file non_empty, and 1 if its empty.
 */
int is_empty(char **s)
{
	while (**s != '\0')
	{
		if (!isspace((unsigned char)**s))
			return (0);
		(*s)++;
	}
	return (1);
}
/**
 * exec_file - function that excute the file using file discriptor.
 * @fd: file discriptor
 */
void exec_file(FILE *fd)
{
	int line_number = 1;
	char *instruct;
	int vo_idx;
	instruction_t valid_opcodes[] = {{"push", push},
					{"pall", pall},
					{NULL, NULL}};
	char *line_opcode;
	stack_t *stack = NULL;

	instruct = malloc(10 * sizeof(char));
	if (instruct == NULL)
		malloc_err();
	while (fgets(instruct, 1024, fd) != NULL)
	{
		if (is_empty(&instruct) == 0)
		{
			line_opcode = strtok(instruct, " \n");
			line_value = strtok(NULL, "\n");
			for (vo_idx = 0; valid_opcodes[vo_idx].opcode != NULL; vo_idx++)
			{
				if ((strcmp(line_opcode, valid_opcodes[vo_idx].opcode) == 0))
				{
					valid_opcodes[vo_idx].f(&stack, line_number);
					break;
				}
			}
			if (valid_opcodes[vo_idx].opcode == NULL)
				instruct_err(line_number, line_opcode);
		}
		line_number++;
	}
	free_stack(stack);
}
