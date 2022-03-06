// https://www.chegg.com/homework-help/questions-and-answers/write-function-odd-array-returns-true-integers-array-odd-function-also-find-sum-odd-intege-q93548209

#include <stdio.h>
#include <stdbool.h> //header to employ the functionalities of boolean algebra
bool all_odd_in_array(int[], int, int *);
// prototype of the function
// providing signature(types of parameters and number of parameters) of the function

// function definition. It will return true if the array has only odd numbers
// It also update sum with the sum of odd numbers
bool all_odd_in_array(int a[], int n, int *sum)
{
    int counter = 0;
    // loop to find if all numbers are odd or not and updating sum variable with the
    // sum of all odd numbers
    for (int i = 0; i < n; i++)
    {
        // a[i]%2!=0 logic to filter odd numbers as odd numbers are not divisible by 2
        if (a[i] % 2 != 0)
        {

            counter++;
            *sum = *sum + a[i];
        }
    }
    if (counter == n)
        return true;
    else
        return false;
}
// In this function all_odd_in_array, We have a variable counter in order to keep track of all odd number
// for odd number it gets incremented by 1
// and if all numbers of the array area odd. It will get the value same as the size of the array
// so in this we will return true if all are odds i.e, if counter becomes n itself otherwise we will return false
int main()
{

    int a[10], n, sum = 0;

    printf("\nEnter the size of the array:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the element %d:", i + 1);
        scanf("%d", &a[i]);
    }

    // if function return true it will execute the statement under if
    if (all_odd_in_array(a, n, &sum))
    {
        printf("\nAll integers in the array are odd!");
    }
    // if function return false it will execute the statament under else
    else
    {
        printf("\nAll integers in the array are not odd!!");
    }
    // sum of all odd integers of the array is displayed
    printf("\nSum of all odd integers of the array is %d", sum);
    return 0;
}