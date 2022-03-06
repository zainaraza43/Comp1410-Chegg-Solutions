// matrix.c

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// The method below return true if matrix a and b are equal
bool matrix_equals(const int n, const int m, const int *a, const int *b);

// The method below negate the row# r of matric a
void negate_row(const int n, const int m, int *a, int r);

// The method below negate the col# c of matric a
void negate_col(const int n, const int m, int *a, int c);

// The method below adds two matrix a and b to c
void matrix_add(const int n, const int m, const int *a, const int *b, int *c);
int main()
{

    // test 1
    int a[3][3] = {{5, 6, 7}, {2, 3, 12}, {10, 20, 25}};
    int b[3][3] = {{5, 6, 7}, {2, 3, 12}, {10, 20, 25}};
    bool resAct = matrix_equals(2, 3, &a[0][0], &b[0][0]);
    bool resExp = true;
    if (resAct != resExp)
    {
        printf("Test 1 not passed...\n");
        return 0;
    }
    // test 2
    // negating 3rd row of the matrix a

    negate_row(3, 3, &a[0][0], 2);
    int negRowA[3][3] = {{5, 6, 7}, {2, 3, 12}, {-10, -20, -25}};
    resAct = matrix_equals(2, 3, &a[0][0], &negRowA[0][0]);
    resExp = true;
    if (resAct != resExp)
    {
        printf("Test 2 not passed...\n");
        return 0;
    }
    // test 3
    // negating 2nd column of the matrix a
    int mat2[3][3] = {{5, 6, 7}, {2, 3, 12}, {10, 20, 25}};
    negate_col(3, 3, &mat2[0][0], 2);
    int matNegativeA[3][3] = {{5, 6, -7}, {2, 3, -12}, {10, 20, -25}};
    resAct = matrix_equals(2, 3, &mat2[0][0], &matNegativeA[0][0]);
    resExp = true;
    if (resAct != resExp)
    {
        printf("Test 3 not passed...\n");
        return 0;
    }
    // test 4
    // add two matrix
    int a3[3][3] = {{5, 6, 7}, {2, 3, 12}, {10, 20, 25}};
    ;
    int a4[3][3] = {{1, 2, 3}, {0, 0, 0}, {6, 6, 6}};
    int a5[3][3];
    matrix_add(3, 3, &a3[0][0], &a4[0][0], &a5[0][0]);
    int matrixSum[3][3] = {{6, 8, 10}, {2, 3, 12}, {16, 26, 31}};
    resAct = matrix_equals(3, 3, &a5[0][0], &matrixSum[0][0]);
    resExp = true;
    if (resAct != resExp)
    {
        printf("Test 4 not passed...\n");
        return 0;
    }

    printf("All tests passed successfully.");
    printf("\n");
    return 0;
}
// The method below return true if matrix a and b are equal
bool matrix_equals(const int n, const int m, const int *a, const int *b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(a + i + j) != *(b + i + j))
                return false;
        }
    }
    return true; // otherwise
}

// The method below negate the row# r of matric a
void negate_row(const int n, const int m, int *a, int r)
{
    for (int i = 0; i < m; i++)
    {
        *(a + r * m + i) *= -1;
    }
}
// The method below negate the row# r of matric a
void negate_col(const int n, const int m, int *a, int c)
{
    for (int i = 0; i < n; i++)
    {
        *(a + i * m + c) *= -1;
    }
}

// The method below adds two matrix a and b to c
void matrix_add(const int n, const int m, const int *a, const int *b, int *c)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            *(c + m * i + j) = *(a + m * i + j) + *(b + m * i + j);
        }
    }
}