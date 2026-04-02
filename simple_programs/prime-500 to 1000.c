#include <stdio.h>
void main()
{
    int i, flag = 0, n;
    for (n = 500; n < 1000; n++)
    {
        for (i = 2; i < n - 1; i++)

        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("\n Numis not prime");
        else
            printf("\n Num %d is prime", n);
    }
}
