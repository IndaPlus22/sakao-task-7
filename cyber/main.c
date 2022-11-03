#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAMESIZE 20

int main()
{
    int n;
    scanf("%d", &n);
    char strarr[n * 2][NAMESIZE];
    // char *strarr[n * 2];
    // char tmpstr[NAMESIZE];

    for (int i = 0; i < n * 2; i++)
    {
        scanf("%s", strarr[i]);
        // scanf("%s", tmpstr);
        // strarr[i] = (char *)malloc(NAMESIZE * sizeof(char));
        // strcpy(strarr[i], tmpstr);
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
                if (temp[q] != 1 && strcmp(strarr[i], strarr[q]) == 0 && strcmp(strarr[i + n], strarr[q + n]) == 0)
                {
                    j++;
                    temp[q] = 1;
                    // printf("tedst i: %d, q: %d\n", i, q);
                }
            }
        }
    }

    // for (int i = 0; i < n*2; i++)
    // {
    //     free(strarr[i]);
    // }
    // free(strarr);
    

    printf("%d", n - j);

    int t;
    scanf("%d", &t);
}