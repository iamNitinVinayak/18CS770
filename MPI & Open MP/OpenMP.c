<<<<<<< HEAD
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>  
#define N 3

int A[N][N];
int B[N][N];
int C[N][N];

int main()
{
    int i,j,k;

    omp_set_num_threads(omp_get_num_procs());
    for (i= 0; i< N; i++)
        for (j= 0; j< N; j++)
        {
            A[i][j] = 2;
            B[i][j] = 5;
        }

    #pragma omp parallel for private(i,j,k) shared(A,B,C)

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            for (k = 0; k < N; ++k)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
        }
    }

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            printf("%d ",C[i][j]) ;         
        }
        printf("\n");
    }
=======
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>  
#define N 3

int A[N][N];
int B[N][N];
int C[N][N];

int main()
{
    int i,j,k;

    omp_set_num_threads(omp_get_num_procs());
    for (i= 0; i< N; i++)
        for (j= 0; j< N; j++)
        {
            A[i][j] = 2;
            B[i][j] = 5;
        }

    #pragma omp parallel for private(i,j,k) shared(A,B,C)

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            for (k = 0; k < N; ++k)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
        }
    }

    for (i = 0; i < N; ++i)
    {
        for (j = 0; j < N; ++j)
        {
            printf("%d ",C[i][j]) ;         
        }
        printf("\n");
    }
>>>>>>> 588a8f6f044dae1c469691f9d69c8522c62d2d6b
}