// https://www.chegg.com/homework-help/questions-and-answers/2-write-function-swappointers-swaps-values-two-pointers-type-int--main-function-test-calli-q92316278

#include <iostream>
using namespace std;
// Function declaration
void swap(int *a, int *b);
int main()
{

    // Creating pointer type variable
    int *a, *b;

    // creating integer type variables
    int x, y;

    // getting the first number entered by the user
    cout << "Enter First number :";
    cin >> x;

    // getting the second number entered by the user
    cout << "Enter Second number :";
    cin >> y;

    /* Assigning the address of the
     * integer variabloes to the pointers
     */
    a = &x;
    b = &y;

    // Displaying the two numbers before swapping

    cout << "The value of a before swapping is :" << *a << endl;
    cout << "The value of b before swapping is :" << *b << endl;

    // Calling the function by passing the pointers as arguments
    swap(a, b);

    cout << "The value of a after swapping is :" << *a << endl;
    cout << "The value of b after swapping is :" << *b << endl;

    return 0;
}
/* Function implementation which swaps the two numbers
 * Params : two pointer type variables
 * return : void
 */
void swap(int *a, int *b)
{
    // Creating an integer type temp variable
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}