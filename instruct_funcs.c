#include "monty.h"
/**
 * free_stack - free the stack.
 * @stack: stack.
 */
void free_stack(stack_t *stack)
{
	stack_t *freed_ptr;

	freed_ptr = stack;
	while (freed_ptr != NULL)
	{
		stack = stack->prev;
		free(freed_ptr);
		freed_ptr = stack;
	}
}
/**
 * push - The opcode push pushes an element to the stack.
 * @stack: stack
 * @line_number: line number
 * Usage: push <int>, where <int> is an integer
 * Description:
 * if <int> is not an integer or if there is no argument given to push:
  * print the error message "L<line_number>: usage: push integer."
  * where is the line number in the file
  * followed by a new line, and exit with the status EXIT_FAILURE
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (line_value == NULL || (atoi(line_value) == 0 && *line_value != '0')
			|| is_empty(&line_value) == 1)
		push_err(line_number);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		malloc_err();
	new->n = atoi(line_value);
	new->prev = NULL;
	new->next = NULL;
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->prev = *stack;
		*stack = new;
	}
}
/**
 * pall - The opcode pall prints all the values on the stack
  * starting from the top of the stack.
 * @stack: stack
 * @line_number: line number
 * Usage: pall
 * Description: If the stack is empty, don’t print anything
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	current = *stack;
	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->prev;
	}
}
