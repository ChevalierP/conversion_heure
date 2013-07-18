#include <stdio.h>
#include <stdlib.h>

void conversion(int* h, int* m);
int main()
{
    int continuer=0;
    do
    {
    int minute=0, heure=0;
    printf("Indiquer un nombre de minutes :");
    scanf("%p", &minute);
    conversion(&heure, &minute);
    printf("\n Ce qui correspond a %d heure(s) et %d minute(s)\n", heure, minute);
    printf("Une autre convertion ? Oui(1)/Non(0)");
    scanf("%d",&continuer);
    }while(continuer!=0);
    return 0;
}
void conversion(int* h, int* m)
{
    *h = *m / 60;
    *m = *m % 60;
}
