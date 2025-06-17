#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int b[], int n)
{
    /* for i from 0 to n/2
    we want b[i] to to get swapped with b[n-i-1], since the index goes from 0 to n-1
    */
    int temp;
    for (int i = 0; i < n / 2; i++)
    /*yy explanation - even if lets say n is odd, 
    say 7 n/2 would yield 3.5(float value) interpreted 
    as 3 since integer operation yields integer and the middle no. stays unchanged. 

    */
    {
        temp = b[i];
        b[i] = b[n - i - 1];
        b[n - i - 1] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printArray(arr,7);
    reverse(arr, 7);
    printArray(arr, 7);
    return 0;
}