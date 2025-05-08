/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_putstr
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    return 0;
}
