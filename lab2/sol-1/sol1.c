// https://www.chegg.com/homework-help/questions-and-answers/using-c-please-explain-provided-code-include-include-include-order-b-orders-values-pointed-q92245843

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// order(a, b) orders the values pointed to by a and b so that *a <= *b;
//   *diff is set to absolute value of the difference between *a and *b;
//   returns true if the values were switched and false otherwise
// requires: a, b, and diff point to memory that can be modified
bool order(int *const a, int *const b, int *const diff);

// declaration of swap_pointers method which swaps addresses stored in two
// int* pointers, and not their values.
// note: don't be confused with int**. that's because this method takes addresses
// of two int* pointers. i.e pointers to int*
void swap_pointers(int **a, int **b);

int main(void)
{
    // using x=5 and y=7
    int x = 5, y = 7, diff = 0;
    // ensuring that order method returned false for above values when
    // pointers to x,y and diff are passed as arguments.
    // this is because x is already less than or equal to y
    assert(!order(&x, &y, &diff));
    // ensuring that x and y are not changed
    assert(x == 5);
    assert(y == 7);
    // ensuring that difference is 2
    assert(diff == 2);

    // now changing x to 10, so x=10, y=7
    x = 10;
    // now when order is called, it should return true
    assert(order(&x, &y, &diff));
    // ensuring that switching happened. x is now 7 and y is 10
    assert(x == 7);
    assert(y == 10);
    assert(diff == 3);

    // testing the method using equal values
    x = 4;
    y = 4;
    assert(!order(&x, &y, &diff)); // no switching should occur
    assert(x == 4);
    assert(y == 4);
    assert(diff == 0);

    // now using different values for x and y to test swap_pointers method
    x = 7;
    y = 3;

    // taking pointers to x and y
    int *a = &x;
    int *b = &y;

    // swapping a and b pointers
    swap_pointers(&a, &b);
    // a should be pointing to y now
    assert(*a == y);
    // and b should be pointing to x
    assert(*b == x);
    // but the values of x and y should not change
    assert(x == 7);
    assert(y == 3);

    printf("All tests passed successfully.\n");
    return 0;
}

// implementation of order method
bool order(int *const a, int *const b, int *const diff)
{
    // finding difference between *a and *b, storing in *diff
    *diff = *a - *b;
    // removing negative sign if there's any
    if (*diff < 0)
    {
        *diff *= -1;
    }
    // checking if *a (value stored in address pointed by a) is greater than *b
    if (*a > *b)
    {
        // swapping values stored in addresses pointed by a and b
        int temp = *a;
        *a = *b;
        *b = temp;
        // returning true
        return true;
    }
    // returning false if no swapping is occurred
    return false;
}

// this method swaps the addresses stored in two int* pointers, not their values.
// note: parameters are given as int** because we are actually passing the addresses
// of int* pointers to this method, otherwise swapping is not possible.
void swap_pointers(int **a, int **b)
{
    // swapping addresses stored in a and b
    int *temp = *a;
    *a = *b;
    *b = temp;
}