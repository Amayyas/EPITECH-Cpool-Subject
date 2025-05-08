/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_find_prime_sup
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

int my_find_prime_sup(int nb)
{
    if (nb <= 2)
        return 2;
    while (!my_is_prime(nb)) {
        nb++;
    }
    return nb;
}
