#include <stdio.h>
#include <string.h>

#define NAMESIZE 20

int main()
{
    int n;
    scanf("%d", &n);
    char strs[n * 2][NAMESIZE];

    for (int i = 0; i < n * 2; i++)
    {
        scanf("%s", strs[i]);
    }

    int j = 0;
    short temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (temp[i] != 1)
        {
            for (int q = i + 1; q < n; q++)
            {
                // printf("p%d: %s %s, p%d: %s %s,   temp[%d]: %d, temp[%d]: %d\n", i, strs[i], strs[i+n], q, strs[q], strs[q+n], i, temp[i], q, temp[q]);
                if (temp[q] != 1 && strcmp(strs[i], strs[q]) == 0 && strcmp(strs[i + n], strs[q + n]) == 0)
                {
                    j++;
                    temp[q] = 1;
                    // printf("tedst i: %d, q: %d\n", i, q);
                }
            }
        }
    }

    printf("%d", n - j);

    int t;
    scanf("%d", &t);
}