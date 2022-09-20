#ifndef MAIN_H
#define MAIN_H
/**
 * void prototypes()
 * int prototype
 */

/* this is a putchar function*/
int _putchar(char c);
/**
 * reset_to_98 - takes a pointer to an int
 */
void reset_to_98(int *n);
/*function that swaps the value of two pointers*/
void swap_int(int *a, int *b);
/*function that returns the length of strings*/
int _strlen(char *s);
/*function tha prints a string*/
void _puts(char *str);
/* function reverses a string */
void rev_string(char *s);
/*function that prints every other character of a string */
void puts2(char *str);
/* function that prints half of a string followed
 * by a new line
 */
void puts_half(char *str);
/* function that prints n elements of an array of int */
void print_array(int *a, int n);
/* function that copies the string by src */
char *_strcpy(char *dest, char *src);
/* functin that converts string to integer */
int _atoi(char *s);

#endif
