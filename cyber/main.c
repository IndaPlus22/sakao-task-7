#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char strs[n*2][20];

    for (int i = 0; i < n * 2; i++)
    {
        scanf("%s", strs[i]);
    }

    char people[n][39];
    for (int i = 0; i < n; i++)
    {
        strcpy(people[i], strcat(strs[i], strs[i + n]));
        printf("%s\n", people[i]);
    }

    int j = 0;
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        for (int q = 0; q < n; q++)
        {
            if (people[i] == people[q] ) {
                j++;
                break;
            }
        }
    }

    printf("%d", j);

    int t;
    scanf("%d", &t);
}