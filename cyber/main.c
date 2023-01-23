#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAMESIZE 42

#define MAX 100001

int compare(const void* val1, const void* val2) {
    return strcmp(val1, val2);
}

int main()
{
    unsigned int n;
    scanf("%d", &n);
    char strarr[n * 2][NAMESIZE];

    for (int i = 0; i < n * 2; i++)
    {
        scanf("%s", strarr[i]);
    }

    char people[n][NAMESIZE*2];
    unsigned int j = 0;

    for (int i = 0; i < n; i++)
    {
        strcpy(people[i], strcat( strcat(strarr[i], "."), strarr[i + n]) );
        // printf("pep: %s\n", people[i]);
    }

    // try qsort
    qsort(people, n, NAMESIZE*2, compare);

    for (int i = 0; i < n; i++)
    {
        // printf("new: %s\n", people[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        // printf("ok: %s, %s, comp: %d\n", people[i], people[i+1], strcmp(people[i], people[i+1]));
        if (strcmp(people[i], people[i+1]) == 0) // same
        {
            j++;
        }
    }

    printf("%d", n - j);

    int t;
    scanf("%d", &t);

    return 0;
}