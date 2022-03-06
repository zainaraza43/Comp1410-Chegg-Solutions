// https://www.chegg.com/homework-help/questions-and-answers/use-recursion-write-function-small-digits-returns-true-digits-given-number-small-0-1-2-3-4-q93548169

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool all_small_digits(int n)
{
    if (n == 0)
        return true;
    int lastDigit = n % 10;
    if (lastDigit > 4)
        return false;
    int newNumber = n / 10;
    return all_small_digits(newNumber);
}

int main()
{
    int i, num;
    bool result;
    for (i = 1; i <= 3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        result = all_small_digits(num);
        assert(result == true);
        printf("%d contains all small digits\n", num);
    }
    return 0;
}

// logic of the function :
/*
In order to check if a number contains all small digits or not, we would break down the
number into individual digits and check those digits. If any digit is greater than 5, then
we would return False, else we would check for remaining number. To do so, we would check the
right most digit (number%10). If it's smaller, we would discard this digit and check the remaining
number (number/10). This process would continue till either we have a bigger digit or we have
checked all digits and all are small, so we would return true.
In the main method, we have used for loop to test for 3 test cases and using assert to test.
*/