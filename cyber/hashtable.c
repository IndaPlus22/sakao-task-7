#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAMESIZE 20

#define MAX 100001

unsigned long hash(char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash % MAX;
}

int main()
{
    printf("jasdasd: %d", hash("jasdasd"));
    printf("jasdasd: %d", hash("jasdasd"));
    printf("dsad: %d", hash("dsad"));

    int tdasdasd;
    scanf("%d", tdasdasd);
}