// https://www.chegg.com/homework-help/questions-and-answers/someone-please-help-question-need-implement-c-could-include-screenshot-test-run-d-great-q93820968

#include <stdio.h>
#include <string.h>
// here is our function
char *select_max(char str[])
{
    char *ptr = str;
    int a = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        // comparing character for maximum ASCII
        if ((int)str[i] > 0)
        {
            ptr = str[i];
        }
    }
    // returning the pointer
    return ptr;
}
int main()
{
    // taking string as input
    char str[20];
    printf("Enter string\n");
    gets(str);
    // printf("%s", str);
    // calling function
    char *ptr = select_max(str);
    printf("Character with maximum ASCII value is \n");
    printf("%c", ptr);
    return 0;
}