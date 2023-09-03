#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int lowest;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (a[j] <= a[i])
            {
                lowest = a[j];
            }
        }
    }
    printf("%d %d", lowest, i);

    return 0;
}