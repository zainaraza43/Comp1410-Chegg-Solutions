// https://www.chegg.com/homework-help/questions-and-answers/marked-problems-complete-implementation-following-function-used-select-character-maximal-a-q93827176

#include <bits/stdc++.h>
using namespace std;

void encode(string st, int k)
{

    string newS;

    for (int i = 0; i < st.length(); ++i)
    {

        int val = int(st[i]);

        int dup = k;

        if (val + k > 122)
        {
            k -= (122 - val);
            k = k % 26;
            newS += char(96 + k);
        }
        else
            newS += char(val + k);

        k = dup;
    }

    cout << newS;
}

int main()
{
    string str = "pqrstuv";
    int k = 28;

    encode(str, k);

    return 0;
}
