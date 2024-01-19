
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

int  main(){
    int q;
    scanf("%d",&q);
    while (q--)
    {
        char str[50];
        scanf("%s",str);
        if (strcmp(str,"add_matrix")==0 || strcmp(str,"mult_matrix")==0 || strcmp(str,"scalar_mult_matrix")==0 || strcmp(str,"transpose_matrix")==0 || strcmp(str,"determinant")==0)
        //all commands except history
        {
            int arg;
            scanf("%d",&arg);

            FILE *f;
            f=fopen("mx_history","a");
            fprintf(f,"LOG::%s ",str);
            fprintf(f,"%d\n",arg);
            fclose(f);
            

            if (strcmp(str,"add_matrix")==0 && arg==0)
            {
                Matrix *A;
                Matrix *B;
                Matrix *C;
                A=scan_matrix(A);
                B=scan_matrix(B);
                C=add_matrix(A,B);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    print_matrix(C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);
                destroy_matrix(B);
            }
            else if (strcmp(str,"mult_matrix")==0 && arg==0)
            {
                Matrix *A;
                Matrix *B;
                Matrix *C;
                A=scan_matrix(A);
                B=scan_matrix(B);
                C=mult_matrix(A,B);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    print_matrix(C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);
                destroy_matrix(B);
            }
            else if (strcmp(str,"scalar_mult_matrix")==0 && arg==0)
            {
                long long int S;
                scanf("%lld",&S);
                Matrix *A;
                A=scan_matrix(A);
                Matrix *C;
                C=scalar_mult_matrix(S,A);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    print_matrix(C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);

            }
            else if (strcmp(str,"transpose_matrix")==0 && arg==0)
            {
                Matrix *A;
                A=scan_matrix(A);
                Matrix *C;
                C=transpose_matrix(A);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    print_matrix(C);
                    destroy_matrix(C);

                }
                destroy_matrix(A);

            }
            else if (strcmp(str,"determinant")==0 && arg==0)
            {
                Matrix *A;
                A=scan_matrix(A);
                long long int D;
                if (A->num_rows!=A->num_cols)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    destroy_matrix(A);
                }
                else
                {
                    D=determinant(A);
                    printf("%lld\n",D);
                    destroy_matrix(A);
                }
            }



            else if (strcmp(str,"add_matrix")==0 && arg==1)
            {
                Matrix *A;
                Matrix *B;
                Matrix *C;
                char filename1[100];
                scanf("%s",filename1);
                char filename2[100];
                scanf("%s",filename2);
                char filename3[100];
                scanf("%s",filename3);
                A=read_matrix_from_file(filename1);
                if (A==NULL)
                {
                    free(A);
                    continue;
                }
                
                B=read_matrix_from_file(filename2);
                if (B==NULL)
                {
                    free(B);
                    destroy_matrix(A);
                    continue;
                }
                
                C=add_matrix(A,B);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    write_matrix_to_file(filename3,C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);
                destroy_matrix(B);

            }
            else if (strcmp(str,"mult_matrix")==0 && arg==1)
            {
                Matrix *A;
                Matrix *B;
                Matrix *C;
                char filename1[100];
                scanf("%s",filename1);
                char filename2[100];
                scanf("%s",filename2);
                char filename3[100];
                scanf("%s",filename3);
                A=read_matrix_from_file(filename1);
                if (A==NULL)
                {
                    free(A);
                    continue;
                }
                
                B=read_matrix_from_file(filename2);
                if (B==NULL)
                {
                    free(B);
                    destroy_matrix(A);
                    continue;
                }
                
                C=mult_matrix(A,B);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    write_matrix_to_file(filename3,C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);
                destroy_matrix(B);

            }
            else if (strcmp(str,"scalar_mult_matrix")==0 && arg==1)
            {
                long long int S;
                scanf("%lld",&S);
                char filename1[100];
                scanf("%s",filename1);
                char filename2[100];
                scanf("%s",filename2);
                Matrix *A;
                Matrix *C;
                A=read_matrix_from_file(filename1);
                if (A==NULL)
                {
                    free(A);
                    continue;
                }
                
                C=scalar_mult_matrix(S,A);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    write_matrix_to_file(filename2,C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);

            }
            else if (strcmp(str,"transpose_matrix")==0 && arg==1)
            {
                char filename1[100];
                scanf("%s",filename1);
                char filename2[100];
                scanf("%s",filename2);
                Matrix *A;
                Matrix *C;
                A=read_matrix_from_file(filename1);
                
                if (A==NULL)
                {
                    free(A);
                    continue;
                }
                
                C=transpose_matrix(A);
                if (C==NULL)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    free(C);
                }
                else
                {
                    write_matrix_to_file(filename2,C);
                    destroy_matrix(C);
                }
                destroy_matrix(A);

            }
            else if (strcmp(str,"determinant")==0 && arg==1)
            {
                char filename1[100];
                scanf("%s",filename1);
                Matrix *A;
                long long int D;
                A=read_matrix_from_file(filename1);
                if (A==NULL)
                {
                    free(A);
                }
            
                
                else if (A->num_rows!=A->num_cols)
                {
                    printf("ERROR: INVALID ARGUMENT\n");
                    destroy_matrix(A);
                }
                else
                {
                    D=determinant(A);
                    printf("%lld\n",D);
                    destroy_matrix(A);
                }
            }
        }
        else if (strcmp(str,"history")==0)
        {
            FILE *f;
            f=fopen("mx_history","a");
            fprintf(f,"LOG::%s\n",str);
            fclose(f);  
            //history
            f=fopen("mx_history","r");
            char end;
            end=fgetc(f);
            while (end!=EOF)
            {
                printf("%c",end);
                end=fgetc(f);
            }
            fclose(f);

         }
      

        
    }
    

    return 0; 
}