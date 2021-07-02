#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[2];
    srand((int)time(NULL));

    printf("Rolling the dice...\n");
    for (int i = 0; i < 2; i++)
    {
        a[i] = rand() % 6 + 1;
        printf("Die %d: %d\n", i + 1, a[i]);
    }
    printf("Total value: %d\n", a[0] + a[1]);
    if (a[0] + a[1] >= 7)
        printf("You won!\n");
    else
        printf("You lost\n");

    return 0;
}
