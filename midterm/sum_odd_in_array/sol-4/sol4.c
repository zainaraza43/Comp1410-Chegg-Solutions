// https://www.chegg.com/homework-help/questions-and-answers/write-function-alloddinarray-returns-true-integers-array-odd-function-also-find-sum-odd-in-q93520564
bool all_odd_in_array(int a[], int n, int *sum)
{

    int total = 0;
    bool all_odd = true;

    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 == 1)
        {
            total += a[i];
        }

        else
        {
            all_odd = false;
        }
    }

    *sum = total;

    return all_odd;
}