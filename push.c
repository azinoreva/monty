#include "monty.h"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @counter: line Number
 * Return: no return
*/
void f_push(stack_t **head, unsigned int counter)
{
	int num, z = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			z++;
		for (; bus.arg[j] != '\0'; z++)
		{
			if (bus.arg[z] > 57 || bus.arg[z] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	num = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, num);
	else
		addqueue(head, num);
}