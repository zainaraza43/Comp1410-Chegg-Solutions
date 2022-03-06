// https://www.chegg.com/homework-help/questions-and-answers/c-language-write-function-sumoddinarray-returns-sum-odd-integers-array-function-also-count-q93538975

#include <stdio.h>

// function to calculate sum of odd numbers in array
int sum_odd_in_array(int a[], int n, int *count)
{
    int sum = 0;

    // looping over array
    for (int i = 0; i < n; i++)
    {

        // condition to check element is odd or even
        if (a[i] % 2 == 1)
        {
            // increemnting count and adding element to sum
            *count += 1;
            sum += a[i];
        }
    }
    // returning sum after loop
    return sum;
}
int main(void)
{
    int count = 0, n;

    // getting input of array elements
    printf("Enter no of elements in array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // calling function and stroing result in sum
    int sum = sum_odd_in_array(a, n, &count);

    // printing sum and count
    printf("Sum of odd numbers : %d\n", sum);
    printf("number of odd numbers : %d\n", count);
    return 0;
}