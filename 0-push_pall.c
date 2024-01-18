#include "monty.h"
/**
 * push - this function will help us push
 * @stack: this will be the ptr to stack
 * @value: this is what to push
 * @line: number for line to print in the stderr
 * Return: None
 */
void push(stack_t **stack, const char *arg, unsigned int line_number)
{
	stack_t *n_node;
	int value;

	if (!arg || !*arg)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);
	if (value == 0 && arg[0] != '\0')
	{
		fprintf(stderr, "L%u: usage: push int\n", line_number);
		exit(EXIT_FAILURE);
	}
	n_node = malloc(sizeof(stack_t));
	if (!n_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	n_node->n = value;
	n_node->prev = *stack;
	*stack = n_node;
}
/**
 * pall - prints all data nodes
 * @stack: ptr to the stack
 * @line_number: number where stderr will refer
 * Retturn: None
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t **current = NULL;
	if (!*stack)
		return;

	current = stack;
	(void) line_number;

	while (current != NULL)
	{
		printf("%d\n", (*current)->n);
		*current = (*current)->prev;
	}
}
