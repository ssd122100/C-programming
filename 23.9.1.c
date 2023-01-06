#include <stdio.h>
void transpose(int A[3][3], int B[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            B[i][j] = A[j][i];
}

int main()
{

    int A[3][3],B[3][3], i, j;
     for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d",&A[i][j]);
}
    transpose(A,B);

    printf("Result matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        printf("%d ", B[i][j]);
        printf("\n");
    }

    return 0;
}
