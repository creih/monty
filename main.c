#include "monty.h"
/**
 * main - calls all other funcs
 * @argc: nbr of argv elements
 * @argv: array of terminal args
 * Return: int preferably
 */
int main(int argc, char *argv[])
{
	FILE *fil;
	stack_t *stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "Üsage: %s <file.m>\n", argv[0]);
		return (EXIT_FAILURE);
	}
	fil = fopen(argv[1], "r");
	if (!fil)
	{
		fprintf(stderr, "Error opening file");
		return (EXIT_FAILURE);
	}
	exec_inst(fil, &stack);
	fclose(fil);
	return (EXIT_SUCCESS);

}
