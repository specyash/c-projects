#include <stdio.h>

int main()
{
    int arr[3][10];
    int a, b, c ;
    printf("First No. Please\n");
    scanf("%d", &a);
    printf("Second No. Please\n");
    scanf("%d", &b);
    printf("Third No. Please\n");
    scanf("%d", &c);
    int mul[] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}