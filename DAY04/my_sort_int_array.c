/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** my_sort_int_array
*/

void my_swap(int *a, int *b);

static void check_and_swap(int *array, int j, int *swapped)
{
    if (array[j] > array[j + 1]) {
        my_swap(&array[j], &array[j + 1]);
        *swapped = 1;
    }
}

void my_sort_int_array(int *array, int size)
{
    int i;
    int j;
    int swapped;

    if (array == 0 || size <= 0)
        return;
    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            check_and_swap(array, j, &swapped);
        }
        if (swapped == 0)
            break;
    }
}
