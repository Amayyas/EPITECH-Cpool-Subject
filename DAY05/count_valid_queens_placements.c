/*
** EPITECH PROJECT, 2025
** EPITECH Cpool Subject
** File description:
** count_valid_queens_placements
*/

#include <stdlib.h>
#include <stdio.h>

int is_safe(int *board, int row, int col, int n)
{
    for (int i = 0; i < row; i++) {
        if (board[i] == col || board[i] - i == col - row ||
            board[i] + i == col + row) {
            return 0;
        }
    }
    return 1;
}

int place_queens(int *board, int row, int n)
{
    int count = 0;
    if (row == n) {
        return 1;
    }
    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col, n)) {
            board[row] = col;
            count += place_queens(board, row + 1, n);
            board[row] = -1;
        }
    }
    return count;
}

int count_valid_queens_placements(int n)
{
    int count = 0;
    int *board = malloc(n * sizeof(int));

    if (board == NULL)
        return -1;
    for (int i = 0; i < n; i++)
        board[i] = -1;
    count = place_queens(board, 0, n);
    free(board);
    return count;
}
