#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);
void swap(int *xp, int *yp);

void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
int split(int *array, int low, int high, size_t size);
void recursion(int *array, int low, int high, size_t size);

void shell_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);

void counting_sort(int *array, size_t size);

void merge_sort(int *array, size_t size);
void mover(int *array, int *left, int *right, int l_size, int r_size,
int low, int middle);
void merger(int *array, int low, int middle, int high);
void splitter(int *array, int low, int high);

void swap(int *n1, int *n2);
void heap_max(int *array, size_t size, size_t base, size_t ele);
void heap_sort(int *array, size_t size);

void count_sort(int *array, size_t size, int digit);
void radix_sort(int *array, size_t size);

void merger(int *array, int low, int n, int dir);
void sorter(int *array, int low, int n, int dir, size_t size);
void bitonic_sort(int *array, size_t size);

int partitionner(int *array, int low, int high, size_t size);
void splitter_helper(int *array, int low, int high, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif
