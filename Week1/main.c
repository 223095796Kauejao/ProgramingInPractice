#include <stdio.h>
int main () {
char municipality[40];
char mayor[40];
int population;
    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n");

    printf("\nEnter Municipality Name: ");
    scanf(" %39[^\n]", municipality);

    printf("Enter Mayor Name: ");
    scanf(" %39[^\n]", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n.................................\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);
    
    return 0;
}