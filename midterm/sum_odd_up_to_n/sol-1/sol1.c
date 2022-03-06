// https://www.chegg.com/homework-help/questions-and-answers/-c-asap-olease-use-recursion-write-function-sumoddupton--returns-sum-odd-nonegative-intege-q93521935

#include <assert.h>

int sum_odd_up_to_n(int n);

int main()
{
    // edge cases of 0 and 9999 are checked
    assert(sum_odd_up_to_n(0) == 0);
    assert(sum_odd_up_to_n(10) == 1 + 3 + 5 + 7 + 9);
    assert(sum_odd_up_to_n(9999) == 25000000);
    return 0;
}

int sum_odd_up_to_n(int n)
{
    // base case
    // when n is not positive
    if (n <= 0)
        // return 0
        return 0;
    // recursive case
    // recursively calculate the sum of odd integers from 1 to n-1
    int sum = sum_odd_up_to_n(n - 1);
    // if n is odd
    if (n % 2 != 0)
        // add n to sum
        sum += n;
    // return the calculated value of sum
    return sum;
}

/*
sum_odd_up_to_n is a recursive function
base case:
    when n is not positive, return 0 as sum
recursive case:
    calculate the sum of odds from 1 to n-1
    and add n to sum if its odd
    return the calculated sum
*/