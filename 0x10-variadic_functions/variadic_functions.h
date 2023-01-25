#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Auth: Etomchukwu Oguejiofor
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defininf a printer
 * @symbol: A symbol representing a data type
 * @print: A function pointer to a function that prints
 * a data type correspoinding to symbol
 */
typedef struct printer
{
	char *symbol;
	void (*printf)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
