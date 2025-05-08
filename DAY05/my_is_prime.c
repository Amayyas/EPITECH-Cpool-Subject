/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_is_prime
*/

#include <stdbool.h>

bool my_is_prime(int nb)
{
    if (nb <= 1)
        return false;
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0)
            return false;
    }
    return true;
}
