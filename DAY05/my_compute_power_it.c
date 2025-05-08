/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (nb == 0 && p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (int i = 0; i < p; i++) {
        result *= nb;
    }
    return result;
}
