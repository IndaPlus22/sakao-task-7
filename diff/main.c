#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // long long x[100];
    // char str[1000];

    // fgets(str, 1000, stdin);
    // char str[1000] = "10 12\n71293781758123 72784\n1 12345677654321";

    // int j = 0;
    // int lines = 0;
    // int newstart = 0;
    // char tmp[100];
    // int newstart = 0;
    // char tmp[100];

    long long a;
    long long b;
    // int check = scanf("%lld%lld", &a, &b);
    // printf("ab: %lld, %lld\n", a, b);

    // for (int i = 0; scanf("%lld%lld", &a, &b) == 2; i++)
    while (scanf("%lld%lld", &a, &b) == 2)
    {
        // x[i] = llabs(a - b);

        printf("%lld\n", llabs(a - b));
        // j++;

        // check = scanf("%lld%lld", &a, &b);
    }

    // printf("bndsa");

    // for (int q = 0; q < j; q++)
    // {
    //     printf("%lld", x[q]);
    // }

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] == '\n' || str[i] == ' ' || str[i] == '\0')
    //     {
    //         sscanf(tmp, "%lld", &x[j]);  // adds numbers to x
    //         memset(tmp, 0, sizeof(tmp)); // resets tmp
    //         j++;
    //         newstart = 0;
    //     }
    //     else
    //     {
    //         tmp[newstart] = str[i];
    //         newstart++;
    //     }
    // }
    // sscanf(tmp, "%lld", &x[j]);  // adds numbers to x
    // memset(tmp, 0, sizeof(tmp)); // resets tmp

    // for (int i = 0; i < (j + 1) / 2; i++)
    // {
    //     printf("%lld\n", llabs(x[2 * i] - x[(2 * i) + 1]));
    //     // printf("%lld - %lld = %lld\n", x[2 * i], x[(2 * i) + 1], llabs(x[2 * i] - x[(2 * i) + 1]));
    // }

    // int test;
    // scanf("%d", &test);
}