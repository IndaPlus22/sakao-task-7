#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAMESIZE 21

#define MAX 100001

//alla dessa hash funktioner verkar inte vilja funka
// unsigned long hash(char *str)
// {
//     unsigned long hash = 5381;
//     int c;

//     while (c = *str++)
//         hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

//     return hash % MAX;
// }

// unsigned long sdbm(char *str)
// {
//     unsigned long hash = 0;
//     int c;

//     while (c = *str++)
//         hash = c + (hash << 6) + (hash << 16) - hash;

//     return hash % MAX;
// }

// unsigned hashkr(char *s)
// {
//     unsigned hashval;

//     for (hashval = 0; *s != '\0'; s++)
//         hashval = *s + 31*hashval;
//     return hashval % MAX;
// }

int compare(const void* val1, const void* val2) {
    return strcmp(val1, val2);
}

int main()
{
    unsigned int n;
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

    char people[n][NAMESIZE*2];
    unsigned int j = 0;

    for (int i = 0; i < n; i++)
    {
        strcpy(people[i], strcat( strcat(strarr[i], "."), strarr[i + n]) );
    }

    // try qsort
    qsort(people, n, NAMESIZE*2, compare);

    for (int i = 0; i < n-1; i++)
    {
        // printf("ok: %s, %s, comp: %d\n", people[i], people[i+1], strcmp(people[i], people[i+1]));
        if (strcmp(people[i], people[i+1]) == 0) // not same
        {
            j++;
        }
    }
    

    // this is for hashing
    // int checks[MAX] = {0};
    // for (size_t i = 0; i < n; i++)
    // {
    //     checks[hash(strarr[i])] = 1;
    //     // printf("name: %s, hash: %d\n", people[i], hash(people[i]));
    // }

    // for (int i = 0; i < MAX; i++)
    // {
    //     if (checks[i] == 1)
    //     {
    //         // printf("checked yey\n");
    //         j++;
    //     }
    // }
    //-----------------------------------

    printf("%d", n - j);

    int t;
    scanf("%d", &t);

    return 0;
}