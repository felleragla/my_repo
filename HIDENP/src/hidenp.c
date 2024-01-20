/*
** EPITECH PROJECT, 2018
** hidenp
** File description:
** Find a given string in the second string given
*/

#include "../include/my.h"

int hidenp(char *needle, char* haystack)
{
	int pos_haystack;
	int pos_needle = 0;
	
	for (pos_haystack = 0; haystack[pos_haystack] != '\0'; pos_haystack++) {
		if (needle[pos_needle] == haystack[pos_haystack])
			pos_needle++;
		if (needle[pos_needle] == '\0')
			return(HIDENP_TRUE);
	}
	return(HIDENP_FALSE);
}