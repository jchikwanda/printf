#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);

/* Functions to Count */
int num_chars_in_float(float f);
int intlen(int n);
int _strlen(const char *s);

/* Printing Functions */
void print_number(int n);
void print_float(float f, int precision);
void print_string(char *str);

/* Prinf Helper Functions */
void handle_switch(int *index, int *bytes, const char *format, va_list args);

#endif
