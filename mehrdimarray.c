/* mehrdimarray.c

   Kurze Demonstration zu mehrdimensionalen Arrays.
   
   http://github.com/fhdwbap/mehrdimarray
   fhdwbap 2017
 */

#include <stdio.h>
#include <stdlib.h>

#define ZEILEN  3
#define SPALTEN 4

void Eingabe(float [ZEILEN][SPALTEN], int, int);
void Ausgabe(float [ZEILEN][SPALTEN], int, int);


int main(void)
{
    float matrix[ZEILEN][SPALTEN];

    Eingabe(matrix,ZEILEN,SPALTEN);
    Ausgabe(matrix,ZEILEN,SPALTEN);

    /* Einige Diagnose-Demo-Ausgaben */
    printf("Zur Kontrolle:\n");
    printf("Was ist matrix [als Adresse interpretiert]? -> %08X (%u)\n",(unsigned int)matrix,(unsigned int)matrix);
    printf("Was ist matrix[0]?                          -> %08X (%u)\n",(unsigned int)matrix[0],(unsigned int)matrix[0]);
    printf("Was ist matrix[0][0]?                       -> %f\n",matrix[0][0]);
    printf("Was ist die Adresse von matrix[0][0]?       -> %08X (%u)\n",(unsigned int)&matrix[0][0],(unsigned int)&matrix[0][0]);
    printf("Was ist matrix[0][1]?                       -> %f\n",matrix[0][1]);
    printf("Was ist die Adresse von matrix[0][1]?       -> %08X (%u)\n",(unsigned int)&matrix[0][1],(unsigned int)&matrix[0][1]);
    printf("Was ist matrix[1]?                          -> %08X (%u)\n",(unsigned int)matrix[1],(unsigned int)matrix[1]);
    printf("Was ist matrix[1][0]?                       -> %f\n",matrix[1][0]);
    printf("Was ist die Adresse von matrix[1][0]?       -> %08X (%u)\n",(unsigned int)&matrix[1][0],(unsigned int)&matrix[1][0]);

    return EXIT_SUCCESS;

} /* end main */

void Eingabe(float matrix[ZEILEN][SPALTEN], int zeilen, int spalten)
{
    int z, sp;

    /* Es findet hier keine Fehlerueberpruefung bezueglich der
       Parameter zeilen und spalten statt!
     */

    printf("Matrixeingabe - %d Zeilen zu je %d Elementen\n",zeilen,spalten);
    for (z=0; z<zeilen; z++)
    {
        printf("Zeile %d [%d Werte]:  ",z+1,spalten);
        for (sp=0; sp<spalten; sp++)
        {
            scanf("%f", &matrix[z][sp]);
        }
    }

} /* end Eingabe */

void Ausgabe(float matrix[ZEILEN][SPALTEN], int zeilen, int spalten)
{
    int z, sp;

    printf("Matrixausgabe\n");
    for (z=0; z<zeilen; z++)
    {
        for (sp=0; sp<spalten; sp++)
        {
            printf(" %9.5f",matrix[z][sp]);
        }
        putchar('\n');
    }
    putchar('\n');
} /* end Ausgabe */



/* end of file mehrdimarray.c */
