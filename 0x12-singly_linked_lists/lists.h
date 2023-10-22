#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>

/**
 * struct list_s - singly linkedlist
 * @str: string - (malloc'ed strinig)
 * @len: length of a string
 * @next: points to the nextnode
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
