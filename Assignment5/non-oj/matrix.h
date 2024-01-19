#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Matrix Matrix;

Matrix *create_matrix(int r, int c);

void print_matrix(Matrix *m);

void destroy_matrix(Matrix *m);

Matrix *add_matrix(Matrix *A, Matrix *B);

Matrix *mult_matrix(Matrix *A, Matrix *B);

Matrix *scalar_mult_matrix(long long int s, Matrix *M);

Matrix *transpose_matrix(Matrix *A);

long long int determinant(Matrix *M);

Matrix *scan_matrix(Matrix *m);

Matrix *read_matrix_from_file(char *filename);

void write_matrix_to_file(char *filename,Matrix *m);

