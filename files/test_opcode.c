#include "monty.h"
#include <stddef.h>
#include <stdio.h>
/**
 * main - check code
 * Retrun: 0
 */
int main(void)
{
	stack_t *head;
	
	head = NULL;
	printf("---------PUSH--------\n");
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);
	push(&head, 6);
	push(&head, 7);
	printf("---------PRINT--------\n");
	pall(&head, -1);
	printf("-----------------\n");
	return (0);
}
