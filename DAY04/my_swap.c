/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
