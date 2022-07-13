#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack.
 * @stack: double pointer to header (top) of the stack.
 * @line_number: counter for line number of the file.
 *
 * Return: void.
 */
void _pstr(stack_t **stack, unsigned int line_number)
{
	int sun;
	stack_t *temp = *stack;

	(void) line_number;
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	while (temp != NULL)
	{
		sun = temp->n;
		if (!(sun >= 1 && sun <= 127) || sun == 0)
			break;
		printf("%c", sun);
		temp = temp->next;
	}
	printf("\n");
}
