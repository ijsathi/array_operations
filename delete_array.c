#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int position;
    scanf("%d", &position);
    for (i = position; i < n - 1; i++)
    {
        array[i] = array[i + 1];
    }
    for (i = 0; i < n-1; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}