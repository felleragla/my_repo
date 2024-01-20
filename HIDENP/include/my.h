/*
** EPITECH PROJECT, 2018
** hidenp
** File description:
** Macros n' stuff
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>

#define ERROR 84
#define EXIT_SUCCESS 0
#define HIDENP_TRUE 1
#define HIDENP_FALSE 0

void wrong_arg (void);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int hidenp(char *needle, char* haystack);

#endif /* !MY_H_ */
