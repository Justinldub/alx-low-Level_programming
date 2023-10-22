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
	

	while(h != NULL)
	{
		if(h -> str == NULL)
		{
			printf("[0] (nil) \n");
		}
		else
		{
			printf("[%lu] %s\n", h -> len, h -> str);
		}
		count ++;
		h = h -> next;
	}

	return count;
}
