#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "matrix.h"

typedef struct Matrix
{
    int num_rows;
    int num_cols;
    long long int **data;
} Matrix;

Matrix *create_matrix(int r, int c)
{
    Matrix *m = (Matrix *)malloc(sizeof(Matrix));
    m->num_rows = r;
    m->num_cols = c;
    m->data = (long long int **)calloc(r, sizeof(long long int *));
    for (int i = 0; i < r; i++)
    {
        m->data[i] = (long long int *)calloc(c, sizeof(long long int));
    }
    return m;
}



void destroy_matrix(Matrix *m)
{
    // 1: Write code here to free all memory used by the matrix stored in m
    if(m==NULL)
    {
        return;
    }
    
    for (int i = 0; i < m->num_rows; i++)
    {
        free(m->data[i]);
    }
    free(m->data);
    free(m);
}

Matrix *add_matrix(Matrix *A, Matrix *B)
{
    // 2: write code here to add the matrices A and B and return a new matrix with the results.
    // A, B should remain unmodified. If dimensions don't match, it should return NULL.
    if (A->num_cols==B->num_cols && A->num_rows==B->num_rows)
    {
        Matrix *m=create_matrix(A->num_rows,A->num_cols);
        for (int i = 0; i < m->num_rows; i++){
            for (int j = 0; j < m->num_cols; j++){
                
                m->data[i][j]=A->data[i][j]+B->data[i][j];

            }
            
        }
        return m;
    }
    else
    {
        return NULL;
    }
    
}

Matrix *mult_matrix(Matrix *A, Matrix *B)
{
    // 3: write code here to multiply the matrices A and B and return a new matrix with the results.
    // A, B should remain unmodified. If the dimensions don't match, it should return NULL.
    if (A->num_cols==B->num_rows)
    {
        Matrix *m=create_matrix(A->num_rows,B->num_cols);
        for (int i = 0; i < m->num_rows; i++){
            for (int j = 0; j < m->num_cols; j++){
                for (int k = 0; k < A->num_cols; k++){
                    m->data[i][j]+=A->data[i][k]*B->data[k][j];
                }
            }
        }
        return m;
    }
    else
    {
        return NULL;
    }
}

Matrix *scalar_mult_matrix(long long int s, Matrix *M)
{
    // 4: write code here to multiply the matrix A with a scalar s and return a new matrix with the results.
    // M should remain unmodified.
    Matrix *m=create_matrix(M->num_rows,M->num_cols);
    for (int i = 0; i < m->num_rows; i++){
        for (int j = 0; j < m->num_cols; j++){
            m->data[i][j]=s*M->data[i][j];
        }
    }
    return m;
}

Matrix *transpose_matrix(Matrix *A)
{
    // 5: write code here to find the transpose of given matrix A and return a new matrix with the results.
    // A should remain unmodified.
    Matrix *m=create_matrix(A->num_cols,A->num_rows);
    for (int i = 0; i < m->num_rows; i++){
        for (int j = 0; j < m->num_cols; j++){
            m->data[i][j]=A->data[j][i];
        }
    }
    return m;
}

long long int determinant(Matrix *M)
{
    // 6: Write code here to calculate the determinant of the given matrix M (if not a square matrix, return -1).
    // Return the determinant value.
    if (M->num_cols==M->num_rows)
    {
        if (M->num_cols==1)
        {
            
            return M->data[0][0];
        }
        else
        {
            long long int det=0;
            for (int i = 0; i < M->num_cols; i++){
                Matrix *m=create_matrix(M->num_cols-1,M->num_cols-1);
                for (int j = 1; j < M->num_cols; j++){
                    for (int k = 0; k < M->num_cols; k++){
                        if (k<i)
                        {
                            m->data[j-1][k]=M->data[j][k];
                        }
                        else if (k>i)
                        {
                            m->data[j-1][k-1]=M->data[j][k];
                        }
                        
                    }
                    
                }
                if (i%2==0)
                {
                    det+=M->data[0][i]*determinant(m);
                }
                else
                {
                    det-=M->data[0][i]*determinant(m);
                }
                destroy_matrix(m);
            }
            return det;
        }
        
    }
}

// DO NOT MODIFY THE OUTPUT FORMAT of this function. Will be used for grading
void print_matrix(Matrix *m)
{
    printf("%d %d\n", m->num_rows, m->num_cols);
    for (int i = 0; i < m->num_rows; i++)
    {
        for (int j = 0; j < m->num_cols; j++)
        {
            printf("%lld ", m->data[i][j]);
        }
        printf("\n");
    }
}


Matrix *scan_matrix(Matrix *m){
    int r;
    int c;
    scanf("%d %d",&r,&c);
    m=create_matrix(r,c);
    for (int i = 0; i < m->num_rows; i++)
    {
        for (int j = 0; j < m->num_cols; j++)
        {
            scanf("%lld", &(m->data[i][j]));
        }
        
    }
    
    return m;
}

Matrix *read_matrix_from_file(char *filename){
    FILE *ptr;
    ptr=fopen(filename,"r");
    if (ptr==NULL)
    {
        printf("ERROR: INVALID ARGUMENT\n");
        return NULL;
    }
    int r;
    int c;
    fscanf(ptr,"%d %d",&r,&c);
    Matrix *m=create_matrix(r,c);
    for (int i = 0; i < m->num_rows; i++)
    {
        for (int j = 0; j < m->num_cols; j++)
        {
            fscanf(ptr,"%lld", &(m->data[i][j]));
        }
        
    }
    fclose(ptr);
    
    return m;
}

void write_matrix_to_file(char *filename,Matrix *m){
    FILE *ptr;
    ptr=fopen(filename,"w");
    if (ptr==NULL)
    {
        printf("ERROR: INVALID ARGUMENT\n");
        return;
    }
    fprintf(ptr,"%d %d\n",m->num_rows,m->num_cols);
    for (int i = 0; i < m->num_rows; i++)
    {
        for (int j = 0; j < m->num_cols; j++)
        {
            fprintf(ptr,"%lld ",m->data[i][j]);
        }
        fprintf(ptr,"\n");
    }
    fclose(ptr);
}