#include "monty.h"
/**
 * push - pushes an element to the stack.
 * @line_number: integer.
 * @stack: representation of a stack.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_e;

	if (stack == NULL)
	{
		printf("NULL stack");
		exit(EXIT_FAILURE);
	}
	new_e = malloc(sizeof(stack_t));
	if (new_e == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	new_e->n = line_number;
	new_e->next = NULL;
	if (*stack == NULL)
	{
		new_e->prev = NULL;
		*stack = new_e;
	}
	else
	{
		new_e->prev = *stack;
		*stack = new_e;
	}
		
}
/**
 * pall - prints all the values on the stack, starting from the top of the stack.
 * @line_number: integer.
 * @stack: representation of a stack.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;
	(void) line_number;

	while(element != NULL)
	{
		printf("%i\n", element->n);
		element = element->prev;
	}
}
