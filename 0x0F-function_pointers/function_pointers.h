#ifndef FUNCTION_POINTERS_H
#define FUNTIONS_POINTER_H

#include<stddef.h>
#include<stdlib.h>

void print_name, void(*f)(char*));
int_putchar(char c);
void array_iterator(int*array, size_t size,void(*action)(int));
int int_index(int*array,int size, int(*cmp)(int));

#endif
