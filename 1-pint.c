#include "monty.h"
/**
 * pint - like pop but does not delete
 * @stack: points to the stack struc
 * @line_number: stderr will need this
 * Return None
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
