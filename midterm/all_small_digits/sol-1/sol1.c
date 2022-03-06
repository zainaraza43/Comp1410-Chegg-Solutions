// https://www.chegg.com/homework-help/questions-and-answers/use-recursion-write-function-smalldigits-returns-true-digits-given-number-small-0-1-2-3-4--q93515249

#include <stdio.h>
#include "stdbool.h"
// function declaration.
bool all_small_digits(int n);

int main()
{
    // taking number as input from the user.
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    // calling the function
    bool isSmall = all_small_digits(n);

    // if function returned true
    if (isSmall == true)
    {
        printf("All digits of %d are small", n);
    }
    // else if function returned false
    else
    {
        printf("All digits of %d are not small", n);
    }
    return 0;
}

// function definition
bool all_small_digits(int n)
{
    // base case.
    if (n == 0)
        return true;

    int lastDigit = n % 10;
    // if the right most digit of the number (unit's place) is greater than 4, then return false.
    if (lastDigit > 4)
        return false;

    // digit at unit's place was small, now check for other digits in the number.
    // recursively calling the function to check each digit of the number.
    return all_small_digits(n / 10);
}