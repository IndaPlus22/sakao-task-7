#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long a;
    long long b;

    while (scanf("%lld%lld", &a, &b) == 2)
    {
        printf("%lld\n", llabs(a - b));
    }
}