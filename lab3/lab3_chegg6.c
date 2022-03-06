#include <stdio.h>
#include <stdlib.h>
void ReadMatrix(int n, int m, int mat[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\nenter the element [%d/%d]:", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void PrintMatrix(int n, int m, int mat[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
void AddMatrices(int n, int m, int a[][m], int b[][m], int c[][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main()
{
    int n, m;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &m);
    int a[n][m];
    int b[n][m];
    int c[n][m];
    printf("\nEnter the first matrix:\n");
    ReadMatrix(n, m, a);
    printf("\nEnter the second matrix:\n");
    ReadMatrix(n, m, b);
    printf("\nThe first matrix is:\n");
    PrintMatrix(n, m, a);
    printf("\nThe second matrix is:\n");
    PrintMatrix(n, m, b);
    AddMatrices(n, m, a, b, c);
    printf("\nThe resultant matrix after addition is:\n");
    PrintMatrix(n, m, c);
    return 0;
}