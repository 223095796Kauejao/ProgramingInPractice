#include <stdio.h>
#include "utilities.h"

int readInt(void)
{
    int value;

    scanf("%d", &value);

    return value;
}

double readDouble(void)
{
    double value;

    scanf("%lf", &value);

    return value;
}

void pauseScreen(void)
{
    printf("\nPress Enter to continue...\n");
    getchar();
    getchar();
}