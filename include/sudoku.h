#ifndef SUDOKU_H
#define SUDOKU_H

#define STREAM_SIZE 82
#define DIM 9
#define DEBUG_PUZZLE "...26.7.16.8..7..9.19...45..82.1...4...46.29...5...3.28..93...74.4..5..367.3.18..."
#define INVALID_SUDOKU "Your sudoku is invalid\n"

int     is_valid_sudoku(int board[][9]);
void    solve_sudoku(int board[][DIM]);
void    parse_stream(char *stream, int board[][DIM]);
int     legal_move(int board[][DIM], int value_to_place);
void    print_sudoku(int board[][DIM]);

#endif