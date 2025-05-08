/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_print_alpha
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
    for (char c = 'a'; c <= 'z'; c++) {
        my_putchar(c);
    }
    return 0;
}
