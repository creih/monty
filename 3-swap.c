#include "monty.h"
/**
 * swap - exchanges 2 upper elements of stack
 * @stack: points the stack structture
 * @line_number: stderr requires it
 * Return: None except void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int hinduka;

	if (*stack == NULL || (*stack)->prev == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	hinduka = (*stack)->n;
	(*stack)->n = (*stack)->prev->n;
	(*stack)->prev->n = hinduka;
}
