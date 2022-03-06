// https://www.chegg.com/homework-help/questions-and-answers/use-recursion-write-function-alllargedigits-returns-true-digits-given-number-large-5-6-7-8-q93522579

// includes.
// for output input.
#include <stdio.h>
// for testing.
#include <assert.h>
// to access bool type.
#include <stdbool.h>

// prototype.
bool all_large_digits(int n);

// driver function.
int main()
{
    // test for 4 numbers.
    int n1 = 1234;
    int n2 = 56789;
    int n3 = 5555;
    int n4 = 55454545;

    // result of testing.
    assert(all_large_digits(n1) == false);
    // use ternary operator.
    all_large_digits(n1) ? printf("%d returns true\n", n1) : printf("%d returns false\n", n1);
    assert(all_large_digits(n2) == true);
    all_large_digits(n2) ? printf("%d returns true\n", n2) : printf("%d returns false\n", n2);
    assert(all_large_digits(n3) == true);
    all_large_digits(n3) ? printf("%d returns true\n", n3) : printf("%d returns false\n", n3);
    assert(all_large_digits(n4) == false);
    all_large_digits(n4) ? printf("%d returns true\n", n4) : printf("%d returns false\n", n4);

    // end.
    return 0;
}

// all_large_digits() that takes n input and return true if all digits are greater or equal to 5.
// means all digits are from 5 6 7 8 9 only. else return false.
bool all_large_digits(int n)
{
    // if n is greater than 0.
    if (n > 0)
    {
        // check first digits if it is greater than or equal to 5
        if (n % 10 >= 5)
        {
            // return function call all_large_digits(n/10) with and operation with true.
            return true && all_large_digits(n / 10);
        }
        // else return false.
        else
        {
            return false;
        }
    }
    // else return true;
    else
    {
        return true;
    }
}