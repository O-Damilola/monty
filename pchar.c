#include "monty.h"

/**
 * _pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 *
 * Return: void.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	int sun;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
	}

	sun = (*stack)->sun;
	if (sun >= 32 && sun <= 127)
		printf("%c\n", sun);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_stack_t(*stack);

		exit(EXIT_FAILURE);
	}

}
