#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define MAIN_H

/* Prints a character */
int _putchar(char c);

/* Prints the alphabet in lowercase */
void print_alphabet(void);

/* Prints 10 times the alphabet */
void print_alphabet_x10(void);

/* Checks for lowercase character */
int _islower(int c);

/* Checks for alphabetic character */
int _isalpha(int c);

/* Prints the sign of a number */
int print_sign(int n);

/* Computes the absolute value of an integer */
int _abs(int n);

/* Prints the last digit of a number*/
int print_last_digit(int);

/* Prints every minute of the day of Jack Bauer, startinf from 00:00 to 23:59 */
void jack_bauer(void);

/* Prints the 9 times table */
void times_table(void);

/* Adds two integers and returns the result */
int add(int, int);

/* Prints all natural numbers from n to 98 */
void print_to_98(int n);

/* Prints the n times table, starting with 0 */
void print_times_table(int n);

/* Prints a number of two digits with _putchar */
void print_two_digits(int n);

/* END */
