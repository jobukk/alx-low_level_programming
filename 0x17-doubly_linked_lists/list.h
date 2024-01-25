#ifndef LISTS_H
#define LISTS_H
/**
 * struct dlistint_t - double linked list
 * @n: data
 * 
 * @next: points to the next node
 * @prev: ponits to the prev node
 * Description: double linked list node structure
 * for Holberton project
 */
struct dlistint_t {
    int n;
    struct dlistint_t *next;
    struct dlistint_t *prev;
};

typedef struct dlistint_t dlistint_t;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);

#endif
