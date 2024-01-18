#include "monty.h"
/**
 * exec_inst - passes the data to appropriate func
 * @file: this is arg of opcode
 * @stack: points to func
 * Return: None so ever
 */
void exec_inst(FILE *file, stack_t **stack)
{
	char *line = NULL, *opcode = NULL, *arg = NULL;
	size_t len = 0;
	ssize_t soma;
	unsigned int line_bara = 0;

	while ((soma = getline(&line, &len, file)) != -1)
		{
			line_bara++;
			if (line[soma-1] == '\n')
			{
				line[soma-1] = '\0';
				soma--;
			}
			if (soma == 0)
			{
				continue;
			}
			opcode = strtok(line, " ");
			arg = strtok(NULL, " ");
			if (strcmp(opcode, "push") == 0)
				push(stack, arg, line_bara);
			else if (strcmp(opcode, "pall") == 0)
				pall(stack, line_bara);
			else if (strcmp(opcode, "pint") == 0)
				pint(stack, line_bara);
			else if (strcmp(opcode, "nop") == 0)
				nop(stack, line_bara);
			else if (strcmp(opcode, "swap") == 0)
				swap(stack, line_bara);
			else
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", line_bara, opcode);
				exit(EXIT_FAILURE);
			}
		}
	free(line);
}
