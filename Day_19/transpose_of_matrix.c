#include<stdio.h>
int main()
{
    int a[10][10], i, j, r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < c; i++)
    {
        for (j=0;j<r;j++)
            printf("%d ", a[j][i]);
        
        printf("\n");
    }
    return 0;
}