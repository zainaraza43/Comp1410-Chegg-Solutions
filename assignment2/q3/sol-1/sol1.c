// https://www.chegg.com/homework-help/questions-and-answers/3-deepest-substring-string-containing-text-nested-parenthesis-substring-enclosed-maximum-n-q94326007

#include <stdio.h>
#include <string.h>
#include <assert.h>

void deepest_substring(const char str[], char out[])
{
    int level = 0, maxlevel = 0;
    int start = -1, end = -1;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
        {
            level++;
            if (level > maxlevel)
            {
                maxlevel = level;
                start = i + 1;
            }
        }
        else if (str[i] == ')')
        {
            if ((level == maxlevel) && (end < start))
                end = i - 1;
            level--;
        }
    }
    strncpy(out, str + start, end - start + 1);
    out[end - start + 1] = '\0';
}
int main()
{
    char out[50];
    deepest_substring("a+((b+c)+d)", out);
    assert(strcmp(out, "b+c") == 0);

    deepest_substring("(2+4*(5-2))+(2* (-3)) ", out);
    assert(strcmp(out, "5-2") == 0);

    deepest_substring("-b +sqrt(pow(b, 2) - 4*a*c))", out);
    assert(strcmp(out, "b, 2") == 0);

    deepest_substring("a + (b - (c / (d * (e % f))))", out);
    assert(strcmp(out, "e % f") == 0);

    deepest_substring("(((((a + b + c)))))", out);
    assert(strcmp(out, "a + b + c") == 0);

    return 0;
}