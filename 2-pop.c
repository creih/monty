#include "monty.h"
/**
 * pop - like pint but also deletes the top in stack
 * @stack: points
 * @line_number: needed in stderr
 * Return: None
 */
void pop(stack_t **stack, unsigned int line_number) {
	stack_t **temp = NULL;
	if (*stack == NULL) {
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = stack;
	*stack = (*stack)->prev;
	free(temp);
}

