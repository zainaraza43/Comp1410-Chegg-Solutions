// https://www.chegg.com/homework-help/questions-and-answers/c-language-use-recursion-write-function-allsmalldigits-returns-true-digits-given-number-sm-q93538921

#include <stdio.h>
int all_small_digits(int n)
{
    // Check if n less than 10
    if (n < 10)
        // Compare and return result
        return (n >= 0 && n <= 4) ? 1 : 0;
    // Compare and call recursive function or return false
    return (n % 10 >= 0 && n % 10 <= 4) ? all_small_digits(n / 10) : 0;
}
int main()
{
    // Testing function
    printf("%d", all_small_digits(1234));
    printf("\n%d", all_small_digits(12345678));
    printf("\n%d", all_small_digits(10));
    return 0;
}