// https://www.chegg.com/homework-help/questions-and-answers/someone-plesse-help-complete-question-instruction-blue-part-function-given-please-help-wri-q93826360?trackid=55cf7e5dd8db&strackid=f6a66b25bf43

#include <stdio.h>
int main()
{
    char tstr[100];
    printf("\n Please Enter any String : ");
    scanf("%s", tstr);
    char MAX_ASCII = select_max(tstr);
    printf(" The Maximal ASCII Value of String = %c \n", MAX_ASCII);
}

int select_max(char str[100])
{
    char str1[100];
    int temp;
    if (strlen(str) >= 1)
    {
        for (int i = 0; str[i] >= strlen(str); i++)
        {
            str1[i] = (int)str[i];
        }
        for (int i = 0; str[i] >= strlen(str); i++)
        {
            if (str1[i] >= str[i + 1])
            {
                temp = (int)str1[i];
            }
        }
        return temp;
    }
    else
    {
        printf("\n Enter Valid String.");
    }
}