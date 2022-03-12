// https://www.chegg.com/homework-help/questions-and-answers/using-c-explain-code-works-please-analyze-running-times-functions-terms-n-length-string-ex-q93811450?trackid=59a4c73d2633&strackid=3b09f7de7172

#include <stdio.h>
// so first we are sorting the char array and then returning first element of sorted charcter array.

char select_max(char arr[], int n)
{
    if (n >= 0)
    {
        return arr[0]; // since array is sorted in descending order so first element is going to charcter with largest ASCI value
    }
    else
    {
        return ' ';
    }
}
void str_sort(char arr[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[i]) // if arr[j]> arr[i]
            {
                char temp = arr[j]; // we are swapping arr[i] and arr[j]
                arr[j] = arr[i];
                arr[i] = temp;
            }
    }
}

void printArray(char arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%c ", arr[i]);
    printf("\n");
}
int main()
{
    char arr[10] = "hello";
    int n = sizeof(arr) / sizeof(arr[0]);
    str_sort(arr, n); // first sorting in descending order
    printf("Sorted array: \n");
    printArray(arr, n);
    printf("Maximum charcter is: %c", select_max(arr, n)); // returning the maximum charcter with greatest ASCI value
    return 0;
}