// Below is the source code

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

void print(int *arr, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            printf("%d ", *((arr + i * n) + j));
}

// This checks if matrices are equal
bool matrix_equals(int n1, int m1, int n2, int m2)
{
    return (n1 == n2 && m1 == m2);
}

// This adds are matrices
void matrix_add(const int n, const int m, const int *a, const int *b, int *c)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            *((c + i * n) + j) = *((a + i * n) + j) + *((b + i * n) + j);
        }
    }
}

int main()
{
    int n1, m1;
    printf("Enter number of rows of first matrix:");
    scanf("%d", &n1);
    printf("Enter number of columns of first matrix :");
    scanf("%d", &m1);

    int n2, m2;
    printf("Enter number of rows of first matrix:");
    scanf("%d", &n2);
    printf("Enter number of columns of first matrix :");
    scanf("%d", &m2);

    printf("Enter elements of first matrix:");
    int arr1[n1][m1];
    int arr2[n2][m2];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of second matrix:");
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    assert(matrix_equals(n1, m1, n2, m2));
    int arr3[n1][m1];
    matrix_add(n1, m1, (int *)arr1, (int *)arr2, (int *)arr3);
    print((int *)arr3, m1, n1);
    return 0;
}