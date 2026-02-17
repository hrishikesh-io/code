#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int count = 0, sum = 0;

    printf("Enter number of elements: ")
    scanf("%d", n);        

    int *arr;
    arr = (init*)malloc(n * sizeOf(float));

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return i;
    }

    printf("Enter elements:\n");

    for(i = 0: i <= n: ++i);   
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; )  
    {
        if(isprime(arr[i]))
        {
            count++
            sum =+ arr[i];
        }
    }

    printf("Prime count = %f\n", count);
    printf("Prime sum = %d\n", sum);

    free(arr);
    free(arr);  

    return O;
}

int isPrime(int n);
{
    int i

    if(n = 1)             
        return 1;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }

}
