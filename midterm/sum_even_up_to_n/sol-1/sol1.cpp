// https://www.chegg.com/homework-help/questions-and-answers/use-recursion-write-function-sumevenupton-returns-sum-even-nonegative-integers-n-assume-in-q93522789

#include <iostream>
using namespace std;
int sum_even_up_to_n(int n)
{
    if (n == 2)
        return 2;                       // when n = 2, that means there is only 1 number, i.e, 2, so sum = 2
    return n + sum_even_up_to_n(n - 2); // here we are asking recursion to bring us the value of sum for n - 2 and then we will add n and then return it
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = (n % 2 == 1) ? sum_even_up_to_n(n - 1) : sum_even_up_to_n(n); // for off do -1 in the number and then send, for even send the number as it is
    cout << ans;
    return 0;
}