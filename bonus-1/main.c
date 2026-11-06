#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    printf("Entrez un nombre entier en 0 et 100 : ");
    int nbr;
    scanf("%d", &nbr);
    printf("Voici les multiples de 5 de 0 à %d :\n", nbr);
    for (int i = 0; i <= nbr; i += 5) {
            int nbr_x5 = i;
            printf("%d\n", nbr_x5);
        }
}