#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    int pos, val;
    scanf("%d%d", &pos, &val);
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    for (i = 0; i < n + 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}