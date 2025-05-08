/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_print_revalpha
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
    for (char c = 'z'; c >= 'a'; c--) {
        my_putchar(c);
    }
    return 0;
}
