#include <stdio.h>
#include <stdlib.h>

void conversion(int* h, int* m);
int main()
{
    int minute=0, heure=0;
    printf("Indiquer un nombre de minutes :");
    scanf("%d", minute);
    conversion(&heure, &minute);
    printf("\n Ce qui correspond a %d heure(s) et %d miute(s)", heure, minute);

    return 0;
}
void conversion(int* h, int* m)
{
    *h = *m/60;
    *m = *m%60;
}
