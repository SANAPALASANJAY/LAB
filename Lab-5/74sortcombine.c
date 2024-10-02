#include <stdio.h>

void sort(int n, int a[n]);
int main()
{
    int n, m;
    printf("Enter the number of elements in array1 : ");
    scanf("%d", &n);
    printf("Enter the number of elements in array2 : ");
    scanf("%d", &m);
    int a[n], b[m], c[n + m];
    printf("Enter the elements in array1\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements in array2\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - n];
        }
    }

    sort(n + m, c);

    printf("--ARRAY--\n");
    for (int i = 0; i < (n + m); i++)
    {
        printf("%d  ", c[i]);
    }
    return 0;
}

void sort(int n, int a[n])
{
    int flag;
    do
    {
        flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                flag = 1;
            }
        }
    } while (flag);
}
