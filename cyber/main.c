#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAMESIZE 21

#define MAX 100001

//alla dessa hash funktioner verkar inte vilja funka
unsigned long hash(char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash % MAX;
}

unsigned long sdbm(char *str)
{
    unsigned long hash = 0;
    int c;

    while (c = *str++)
        hash = c + (hash << 6) + (hash << 16) - hash;

    return hash % MAX;
}

unsigned hashkr(char *s)
{
    unsigned hashval;

    for (hashval = 0; *s != '\0'; s++)
        hashval = *s + 31*hashval;
    return hashval % MAX;
}

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

    char people[n][NAMESIZE];
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        strcpy(people[i], strcat(strarr[i], strarr[i + n]));
    }

    int checks[MAX] = {0};
    for (size_t i = 0; i < n; i++)
    {
        checks[hash(people[i])] = 1;
        // printf("hello: %d\n", checks[hashkr(people[i])]);
    }

    for (int i = 0; i < MAX; i++)
    {
        if (checks[i] == 1)
        {
            // printf("checked yey\n");
            j++;
        }
    }

    printf("%d", j);

    // printf("\n+++++++++++++++++++++++++++++++++++\n");

    // short temp[n];
    // for (int i = 0; i < n; i++)
    // {
    //     temp[i] = 0;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (temp[i] != 1)
    //     {
    //         for (int q = i + 1; q < n; q++)
    //         {
    //             // printf("p%d: %s %s, p%d: %s %s,   temp[%d]: %d, temp[%d]: %d\n", i, strs[i], strs[i+n], q, strs[q], strs[q+n], i, temp[i], q, temp[q]);
    //             if (temp[q] != 1 && strcmp(strarr[i], strarr[q]) == 0 && strcmp(strarr[i + n], strarr[q + n]) == 0)
    //             {
    //                 j++;
    //                 temp[q] = 1;
    //                 // printf("tedst i: %d, q: %d\n", i, q);
    //             }
    //         }
    //     }
    // }

    // // for (int i = 0; i < n*2; i++)
    // // {
    // //     free(strarr[i]);
    // // }
    // // free(strarr);

    // printf("%d", n - j);

    // int t;
    // scanf("%d", &t);
}