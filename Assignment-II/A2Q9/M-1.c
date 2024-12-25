

#include <stdio.h>

int main()
{
    printf("\nPrime numbers between 1 and 100 are:\n");
    for (int i = 2; i <= 100; i++)  // 1 is not a prime number
    {
        int is_prime = 1;   // 1 means true
        for (int j = 2; j * j <= i; j++)    // checking for prime
        {
            if (i % j == 0) // if not prime
            {
                is_prime = 0;   // 0 means false
                break;
            }
        }
        if (is_prime)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    return 0;
}