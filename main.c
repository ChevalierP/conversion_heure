#include <stdio.h>
#include <stdlib.h>

void conversion(int* h, int* m);
int main()
{
    int minutes=0, heure=0;
    printf("Indiquer un nombre de minutes :");
    scanf("%d", minutes);
    conversion(&heure, &minutes);
    printf("\n Ce qui correspond a %d heure(s) et %d miute(s)", heure, minutes);

    return 0;
}
void conversion(int* h, int* m)
{
    *h=*m/60;
    *m %=60;
}
