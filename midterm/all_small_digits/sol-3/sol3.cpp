// https://www.chegg.com/homework-help/questions-and-answers/question-1-use-recursion-write-function-allsmalldigits-returns-true-digits-given-number-sm-q93510857

#include <bits/stdc++.h>

using namespace std;

bool all_small_digits(int n)
{
    if (n < 10)
        return (n >= 0 && n <= 4) ? true : false;
    return (n % 10 >= 0 && n % 10 <= 4) ? all_small_digits(n / 10) : false;
}

int main()
{
    cout << all_small_digits(23410) << "\n";
    cout << all_small_digits(235102) << "\n";
    cout << all_small_digits(53410) << "\n";
    cout << all_small_digits(21233410) << "\n";
    cout << all_small_digits(2374190) << "\n";
    return 0;
}