/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_compute_factorial_it
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0 || nb > 12)
        return 0;
    if (nb == 0)
        return 1;
    for (int i = 1; i <= nb; i++)
        result *= i;
    return result;
}
