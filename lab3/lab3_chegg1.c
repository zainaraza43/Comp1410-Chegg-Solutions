// matrix.c

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// following method return true if matrix a and b are equal
bool matrix_equals(const int n, const int m, const int *a, const int *b);

// following method negate the row# r of matric a
void negate_row(const int n, const int m, int *a, int r);

// following method negate the col# c of matric a
void negate_col(const int n, const int m, int *a, int c);

// following matrix adds two matrix a and b to c
void matrix_add(const int n, const int m, const int *a, const int *b, int *c);
int main()
{

    // test 1
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2][3] = {{1, 8, 3}, {4, 5, 6}};
    bool result = matrix_equals(2, 3, &a[0][0], &b[0][0]);
    bool expectedResult = false;
    if (result != expectedResult)
    {
        printf("Test 1 not passed...\n");
        return 0;
    }
    // test 2
    // negating 2nd row of the matrix a

    negate_row(2, 3, &a[0][0], 1);
    int negRowA[2][3] = {{1, 2, 3}, {-4, -5, -6}};
    result = matrix_equals(2, 3, &a[0][0], &negRowA[0][0]);
    expectedResult = true;
    if (result != expectedResult)
    {
        printf("Test 2 not passed...\n");
        return 0;
    }
    // test 3
    // negating 2nd column of the matrix a
    int a2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    negate_col(2, 3, &a2[0][0], 1);
    int negColA[2][3] = {{1, -2, 3}, {4, -5, 6}};
    result = matrix_equals(2, 3, &a2[0][0], &negColA[0][0]);
    expectedResult = true;
    if (result != expectedResult)
    {
        printf("Test 3 not passed...\n");
        return 0;
    }
    // test 4
    // add two matrix
    int a3[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int a4[3][3] = {{2, 2, 2}, {1, 1, 1}, {3, 3, 3}};
    int a5[3][3];
    matrix_add(3, 3, &a3[0][0], &a4[0][0], &a5[0][0]);
    int sumMat[3][3] = {{3, 4, 5}, {5, 6, 7}, {10, 11, 12}};
    result = matrix_equals(3, 3, &a5[0][0], &sumMat[0][0]);
    expectedResult = true;
    if (result != expectedResult)
    {
        printf("Test 4 not passed...\n");
        return 0;
    }

    printf("All tests passed successfully.");
    printf("\n");
    return 0;
}
// following method return true if matrix a and b are equal
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

// following method negate the row# r of matric a
void negate_row(const int n, const int m, int *a, int r)
{
    for (int i = 0; i < m; i++)
    {
        *(a + r * m + i) *= -1;
    }
}
// following method negate the row# r of matric a
void negate_col(const int n, const int m, int *a, int c)
{
    for (int i = 0; i < n; i++)
    {
        *(a + i * m + c) *= -1;
    }
}

// following matrix adds two matrix a and b to c
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