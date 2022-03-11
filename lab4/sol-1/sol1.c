// https://www.chegg.com/homework-help/questions-and-answers/information-given-question-provided-code-q93809482

#include <stdio.h>
#include <assert.h>
#include <string.h>

// swap_to_front(str, c) swaps the first character in the string str with the
// character pointed to by c
// requires: str is a valid string that can be modified, length(str) >= 1
// c points to a character in str
void swap_to_front(char str[], char *c)
{
    char temp = str[0];
    str[0] = *c;
    *c = temp;
}

// swap_to_back(str, c) swaps the last character in the string str with the
// character pointed to by c
// requires: str is a valid string that can be modified, length(str) >= 1
// c points to a character in str
void swap_to_back(char str[], char *c)
{
    int length = strlen(str);

    char temp = str[length - 1];
    str[length - 1] = *c;
    *c = temp;
}

// select_max(str) returns a pointer to the character of maximal ASCII value
// in the string str (the first if there are duplicates)
// requires: str is a valid string, length(str) >= 1
char *select_max(char str[])
{
    int i;
    char *maxASCII = &str[0];

    for (i = 1; str[i] != '\0'; i++)
    {
        if (*maxASCII < str[i])
        {
            maxASCII = &str[i];
        }
    }

    return maxASCII;
}

// str_sort(str) sorts the characters in a string in decending order
// requires: str points to a valid string that can be modified
void str_sort(char str[])
{
    char *strPtr = str;

    while (*strPtr != '\0')
    {
        char *maxASCII = select_max(strPtr);
        swap_to_front(strPtr, maxASCII);
        strPtr++;
    }
}

int main(void)
{
    // Implement your test code here
    char str1[] = "abcdef";
    str_sort(str1);
    assert(strcmp(str1, "fedcba") == 0);

    char str2[] = "encyclopedia";
    str_sort(str2);
    assert(strcmp(str2, "yponlieedcca") == 0);

    char str3[] = "asdxfdvbfvcs";
    str_sort(str3);
    assert(strcmp(str3, "xvvssffddcba") == 0);

    char str4[] = "okthatsgood";
    str_sort(str4);
    assert(strcmp(str4, "ttsoookhgda") == 0);

    char str5[] = "avengersassemble";
    str_sort(str5);
    assert(strcmp(str5, "vsssrnmlgeeeebaa") == 0);

    printf("All tests passed successfully. \n");

    return 0;
}