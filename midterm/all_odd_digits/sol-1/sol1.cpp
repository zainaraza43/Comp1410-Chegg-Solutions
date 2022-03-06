// include the header file
// https://www.chegg.com/homework-help/questions-and-answers/use-recursion-write-function-allodddigits-returns-true-digits-given-number-odd-assume-inpu-q93520586

#include <bits/stdc++.h>

using namespace std;

// define the all_digits_odd function
bool all_digits_odd(int n)
{
    // if the last digit of the number is even
    // then simply return false
    if ((n % 10) % 2 == 0)
    {
        // return false
        return false;
    }
    // check if the number is equal to 0 after dividing by 10
    // to check if is not the last digit
    if ((n / 10) != 0)
    {
        // recursively call all_digits_odd(n/10)
        return all_digits_odd(n / 10);
    }
    // return true
    return true;
}

// define the main function
int main()
{
    // create a integer variable n
    int n;
    // take number as input from the user
    cout << "Enter a number: ";
    // take input
    cin >> n;
    // if all_digits_odd returns true
    if (all_digits_odd(n))
    {
        // print true
        cout << "Output: true" << endl;
    }
    // otherwise,
    else
    {
        // print false
        cout << "Output: false" << endl;
    }
    return 0;
}