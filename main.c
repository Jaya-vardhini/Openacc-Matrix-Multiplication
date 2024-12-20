
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    time_t t;
    int **ptr1, **ptr2, **ptr3;
    int N, col1, row2, col2;
    srand ((unsigned) time (&t));
    int i, j, k;
    printf ("\nEnter the value of N : ");
    scanf ("%d", &N);
    ptr1 = (int **) malloc (sizeof (int *) * N);
    ptr2 = (int **) malloc (sizeof (int *) * N);
    ptr3 = (int **) malloc (sizeof (int *) * N);

    for (i = 0; i < N; i++)
        ptr1[i] = (int *) malloc (sizeof (int) * N);
    for (i = 0; i < N; i++)
        ptr2[i] = (int *) malloc (sizeof (int) * N);
    for (i = 0; i < N; i++)
        ptr3[i] = (int *) malloc (sizeof (int) * N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            ptr1[i][j] = rand ();
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            ptr2[i][j] = rand ();
        }
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            ptr3[i][j] = 0;
            for (k = 0; k < N; k++)
                ptr3[i][j] = ptr3[i][j] + ptr1[i][k] * ptr2[k][j];
        }
    }

    return (0);
}


