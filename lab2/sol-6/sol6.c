// https://www.chegg.com/homework-help/questions-and-answers/1-consider-following-function-fib-computes-fibonacci-numbers-1-int-fib-int-n-n-q92273503

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

// order(a, b) orders the values pointed to by a and b so that *a <= *b;
// *diff is set to absolute value of the difference between *a and *b;
// requires: a, b, and diff point to memory that can be modified
// returns true if the values were switched and false otherwise

bool order(int *const a, int *const b, int *const diff)
{

    if (*a > *b)
    {
        *diff = *a - *b;

        // switching the values for correct order
        *a = *b;
        *b = *a + *diff;

        // returns true since the values are switched
        return true;
    }

    *diff = *b - *a;
    return false;
}

// TESTER CODE
int main()
{
    int a, b, diff;
    bool switched;

    // Using asserts in main test that your order function correctly
    // handles each possible ordering of the input values a and b

    // when a starts larger than b
    a = 5;
    b = 2;
    switched = order(&a, &b, &diff);
    assert(a == 2 && b == 5 && diff == 3 && switched);

    // when b starts larger than a
    a = 3;
    b = 8;
    switched = order(&a, &b, &diff);
    assert(a == 3 && b == 8 && diff == 5 && !switched);

    // when a and b are equal).
    a = 4;
    b = 4;
    switched = order(&a, &b, &diff);
    assert(a == 4 && b == 4 && diff == 0 && !switched);

    // if all assertions are true,
    printf("\nAssertions Passed : 3\n");

    return 0;
}