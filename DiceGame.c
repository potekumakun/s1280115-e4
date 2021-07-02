#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[2];
    char name[20];
    srand((int)time(NULL));

    printf("What is your name?\n>");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    printf("Rolling the dice...\n");
    for (int i = 0; i < 2; i++)
    {
        a[i] = rand() % 6 + 1;
        printf("Die %d: %d\n", i + 1, a[i]);
    }
    printf("Total value: %d\n", a[0] + a[1]);
    if (a[0] + a[1] >= 7)
        printf("%s won!\n", name);
    else
        printf("%s lost\n", name);

    return 0;
}
