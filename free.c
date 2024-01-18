#include "monty.h"
/**
 * free_stack - frees allocated memory for stack
 * @stack: points to stack
 * Return: None
 */
void free_stack(stack_t **stack)
{
	stack_t *current = *stack;
	stack_t *next;

	while (current != NULL)
	{
		next = current->prev;
		free(current);
		current = next;
	}
	*stack = NULL;
}
