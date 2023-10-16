#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int array[n - 1];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int value, position;
    scanf("%d%d", &position, &value);
    for (i = n; i >= position + 1; i--)
    {
        array[i] = array[i - 1];
    }
    array[position] = value;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}