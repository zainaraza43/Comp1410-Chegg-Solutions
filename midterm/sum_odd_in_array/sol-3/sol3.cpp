// Same solution as sol.cpp
// https://www.chegg.com/homework-help/questions-and-answers/write-function-sum-oddinarray-returns-sum-odd-integers-array-function-also-count-number-od-q93510960

#include <iostream>
using namespace std;
// function sum_odd_in_array return sum of odd elements in the array and updates *count for odd numbers.
int sum_odd_in_array(int a[], int n, int *count)
{
    // initializing count and sum as 0
    int count2 = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // if element in array is odd we increment count and add the element to sum.
        if (a[i] % 2 == 1)
        {
            sum = sum + a[i];
            count2++;
        }
    }
    // update the count pointer.
    *count = count2;
    return sum;
}
int main()
{
    // sample user input.
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 13, 15};
    int count = 0;
    // creating a pointerCount for count.
    int *pointerCount;
    pointerCount = &count;
    int sum1 = sum_odd_in_array(arr, sizeof(arr) / sizeof(arr[0]), pointerCount);
    // printing sum and count of odd numbers in the array.
    cout << "Sum of odd elements is : " << sum1 << endl;
    cout << "Count of odd elements is : " << count << endl;
}