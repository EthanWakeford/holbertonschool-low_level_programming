#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_recursion(int *array, int value, int low, int high);
void print_array(int *array,int low,int high);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursion(int *array, int value, int low, int high);

#endif
