// https://www.chegg.com/homework-help/questions-and-answers/please-explain-implementation-code-provide-better-understanding--thank-advance-provided-co-q92297331

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

// order(a, b) orders the values pointed to by a and b so that *a <= *b;
// *diff is set to absolute value of the difference between *a and *b;
// returns true if the values were switched and false otherwise
// requires: a, b, and diff point to memory that can be modified
bool order(int *const a, int *const b, int *const diff);

int main(void)
{
    // Perform your tests here

    int a, b, diff;
    bool swap;

    // when a > b
    a = 20;
    b = 10;
    swap = order(&a, &b, &diff);
    assert(swap == true);
    assert(diff == 10);
    assert(a == 10);
    assert(b == 20);
    printf("Test case a > b passed.\n");

    // when a < b
    a = 10;
    b = 20;
    swap = order(&a, &b, &diff);
    assert(swap == false);
    assert(diff == 10);
    assert(a == 10);
    assert(b == 20);
    printf("Test case a < b passed.\n");

    // when a == b
    a = 10;
    b = 10;
    swap = order(&a, &b, &diff);
    assert(swap == false);
    assert(diff == 0);
    assert(a == 10);
    assert(b == 10);
    printf("Test case a == b passed.\n");

    printf("All tests passed successfully.\n");
}

bool order(int *const a, int *const b, int *const diff)
{

    int temp = *a;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
        *diff = *b - *a;
        return true;
    }
    else
    {
        *diff = *b - *a;
        return false;
    }
}