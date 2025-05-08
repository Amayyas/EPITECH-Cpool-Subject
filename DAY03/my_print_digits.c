/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_print_digits
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
    for (char c = '0'; c <= '9'; c++) {
        my_putchar(c);
    }
    return 0;
}
