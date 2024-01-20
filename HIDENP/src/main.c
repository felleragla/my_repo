/*
** EPITECH PROJECT, 2018
** hidenp
** File description:
** The bulk of the programm
*/

#include "../include/my.h"

int main(int ac, char **av)
{
	int hidenp_output;

	if (ac < 3 || ac > 3) {
		wrong_arg();
		return (ERROR);
	}
	hidenp_output = hidenp(av[1], av[2]);
	my_put_nbr(hidenp_output);
	my_putstr("\n");
	return (EXIT_SUCCESS);
}

void wrong_arg(void)
{
	my_putstr("Usage:    ");
	my_putstr("./hidenp needle ");
	my_putstr("haystack\n");
}