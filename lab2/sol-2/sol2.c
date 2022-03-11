// https://www.chegg.com/homework-help/questions-and-answers/need-program-c-consider-function-used-order-two-integers-e-modifies-values-two-variables-b-q92214634

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
bool order(int *const a, int *const b, int *const diff)
{

    int temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
        *diff = *b - *a;
        return true;
    }
    *diff = *b - *a;
    return false;
}

int main()
{

    int a, b, diff;

    // test case 1 when a is smaller than b
    a = 5;
    b = 20;
    bool result = order(&a, &b, &diff);
    assert(a == 5);
    assert(b == 20);
    assert(diff = 15);
    assert(result == false);
    printf("Test Case 1: When a<b passed.\n");

    // test case 2 when a is greater than b
    a = 20;
    b = 5;
    result = order(&a, &b, &diff);
    assert(a == 5);
    assert(b == 20);
    assert(diff = 15);
    assert(result == true);
    printf("Test Case 2: When a>b passed.\n");

    // test case 3 when a equals b
    a = 20;
    b = 20;
    result = order(&a, &b, &diff);
    assert(a == 20);
    assert(b == 20);
    assert(diff == 0);
    assert(result == false);
    printf("Test Case 3: When a==b passed.\n");

    return 0;
}