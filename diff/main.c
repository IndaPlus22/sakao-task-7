#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long x[100];
    char str[1000] = "10 12\n71293781758123 72784\n1 12345677654321";

    // scanf("%s", &str);

    int lines = 0;
    int j = 0;
    int newstart = 0;
    char tmp[100];
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n' || str[i] == ' ' || str[i] == 0)
        {
            printf("stringes: %s\n", tmp);
            x[j] = atoi(tmp); // adds numbers to x
            printf("ok: %d\n", x[j]);
            memset(tmp, 0, sizeof(tmp)); // resets tmp
            j++;
            newstart = 0;
        }
        else
        {
            tmp[newstart] = str[i];
            newstart++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        printf("num: %d\n", x[i]);
        // printf("%d\n", abs(x[2*i] - x[(2*i) + 1]));
    }

    scanf("%s", &str);
}