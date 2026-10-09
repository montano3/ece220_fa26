/*
 * ECE 220 Lecture 10 - exchange two rows of an M x N matrix (slide 10)
 * Build and run:  make row_exchange && ./row_exchange
 */
#include <stdio.h>

#define M 3   /* row size */
#define N 4   /* col size */

void row_exchange(int matrix[M][N], int row_x, int row_y);
void print_matrix(int matrix[M][N]);

int main(void) {
    int matrix[M][N];
    int i, j;

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = i * N + j;
        }
    }

    printf("Before:\n");
    print_matrix(matrix);

    row_exchange(matrix, 0, 2);

    printf("After exchanging rows 0 and 2:\n");
    print_matrix(matrix);
    return 0;
}

void row_exchange(int matrix[M][N], int row_x, int row_y) {
    /* TODO */
}

void print_matrix(int matrix[M][N]) {
    int i, j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
