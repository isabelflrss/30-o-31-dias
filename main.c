
#include <stdio.h>
#include <stdlib.h>


int main() {
    printf("Buen día, hoy te ayudaré a saber cuantos días tiene x mes del año\n");
    printf("¿Qué mes eliges\n");
    int mes;
    int diasMes;
    scanf("%d",&mes);
    switch (mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            diasMes=31;break;
        case 2: diasMes=28;break;
        case 4:
        case 6:
        case 9:
        case 11:
            diasMes=30;break;
            printf ("%d",diasMes);
    }
    return 0;
}

