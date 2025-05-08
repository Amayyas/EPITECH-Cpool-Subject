/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_evil_str
*/

#include <stdio.h>

int my_strlen(char const *str);

int my_evil_str(char *str)
{
    int i = 0;
    int len = my_strlen(str);
    char temp;

    while (i < len / 2) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    }
    return 0;
}
