#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/*
 * print_list - Method that takes the linked_list structure prints all elemets
 * @h: the head
 *Return: total number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while(current != NULL)
	{
		if(current->str == NULL)
		{
			printf("[0] (NULL) \n");
		}
		else
		{
			printf("[%lu] %s\n", current->len, current->str);
		}
		
		current = current->next;
		count++;
	}
		return (count);
}
