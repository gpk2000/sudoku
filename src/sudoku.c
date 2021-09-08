#include <stdio.h>
#include "../include/sudoku.h"
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char stream[STREAM_SIZE];
    int chars_scanned ;

    chars_scanned = scanf("%s", stream);

    if (chars_scanned < STREAM_SIZE - 1) {
        printf("%s\n", INVALID_SUDOKU);
        exit(1);
    }

    int board[DIM][DIM];
    parse_stream(stream, board);
    print_sudoku(board);

    return 0;
}

void parse_stream(char *stream, int board[][DIM])
{
    int j;
    for (j = 0; j < STREAM_SIZE; j++) {
        int row = j / DIM;
        int col = j % DIM;
        if (stream[j] == '.') {
            board[row][col] = 0;
        } 
        else if (isdigit(stream[j])) {
            int digit = stream[j] - '0';
            board[row][col] = digit;
        }
        else {
            printf("%s\n", INVALID_SUDOKU);
            exit(1);
        }
    }
}

void print_sudoku(int board[][DIM])
{
    int i, j;
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}