// https://www.chegg.com/homework-help/questions-and-answers/2-question-implement-function-returns-first-capital-upper-case-letter-string-consisting-lo-q93916269

#include <stdio.h>
#include <ctype.h>
#include <assert.h>

char first_capital(const char str[], int n)
{
    // define start_index and end_index
    int start_index = 0;
    int end_index = n - 1;
    // initailise a with '0'
    char a = '0';

    // using while iterate until start_index <= end_index
    while (start_index <= end_index)
    {
        // find the middle index.
        int middle = start_index + (end_index - start_index) / 2;
        // if the current character is uppercase
        if (isupper(str[middle]))
        {
            // then update the end_index
            end_index = middle - 1;
            // and a with current character.
            a = str[middle];
        }
        // else if character is lower case.
        if (islower(str[middle]))
            // update the start_index.
            start_index = middle + 1;
    }
    // return a.
    return a;
}

int main()
{
    // five test cases to test the function.
    assert(first_capital("aAHL", 4) == 'A');
    assert(first_capital("BADC", 4) == 'B');
    assert(first_capital("abcdA", 5) == 'A');
    assert(first_capital("afgcd", 5) == '0');
    assert(first_capital("abdhHGIH", 8) == 'H');

    return 0;
}