// https://www.chegg.com/homework-help/questions-and-answers/use-recursion-write-function-allevendigits-returns-true-digits-given-number-even-assume-in-q93530573

#include <stdio.h>
// to use bool
#include <stdbool.h>
// recursive function
bool all_even_digits(int n)
{
    // base case
    if (n == 0)
    {
        return true;
    }
    // remainder of n
    int rem = n % 10;
    // if odd
    if (rem % 2 != 0)
    {
        // return false
        return false;
    }
    // call recursion on rest of digits
    return all_even_digits(n / 10);
}
// main function
int main()
{
    // test above function
    printf("%d\n", all_even_digits(12345));
    printf("%d\n", all_even_digits(24680));
}