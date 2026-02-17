#include <stdio.h>
#include <stdlib.h>

int isPrime(int n);

int main()
{
    int n, i;
    int count = 0, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid size!\n");
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(isPrime(arr[i]))
        {
            count++;
            sum += arr[i];
        }
    }

    printf("Prime count = %d\n", count);
    printf("Prime sum = %d\n", sum);

    free(arr);

    return 0;
}

int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}
