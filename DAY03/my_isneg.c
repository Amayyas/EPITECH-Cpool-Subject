/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_isneg
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
        return 1;
    } else {
        my_putchar('P');
        return 0;
    }
}
