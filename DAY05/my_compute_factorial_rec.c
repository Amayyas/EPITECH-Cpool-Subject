/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return 0;
    if (nb == 0)
        return 1;
    return nb * my_compute_factorial_rec(nb - 1);
}
