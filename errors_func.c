#include "monty.h"
/**
 * argument_err - handle the usage fault error
 * Description: if the number not correct
 * Exit: EXIT_FAILURE
 */
void argument_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 * file_err - handle the file opening error
 * @filename: file name.
 * Description: if the file can't be opened
 * Exit: EXIT_FAILURE
 */
void file_err(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}
/**
 * instruct_err - handle the instruction errors
 * @line_number: line number
 * @opcode: opcode
 * Description: if the instruction not found
 * Exit: EXIT_FAILURE
 */
void instruct_err(unsigned int line_number, char *opcode)
{
	fprintf(stderr, "L%i: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
/**
 * malloc_err - handle the allocation memory error
 * Description: if the malloc failed
 * Exit: EXIT_FAILURE
 */
void malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 * push_err - handle the push instruction error
 * @line_number: line number
 * Description: if the push not used correctly
 * Exit: EXIT_FAILURE
 */
void push_err(int line_number)
{
	fprintf(stderr, "L%i: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
