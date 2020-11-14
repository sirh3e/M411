/*
*   Title: Gültigskeitsbereich von Variablen
*   Name: Simon Schaufelberger
*   Date: 10.11.20 
*/

// Includes
#include <stdio.h>
#include <stdlib.h>

#define STR(var) #var

typedef double f64;

int main()
{
    f64 Umfang = 11.45;
    
    printf("%s = %lf\n", STR(Umfang), Umfang);
    return 0;
}

/* Aufgaben:

1. Können beide Programme ohne Fehler kompiliert werden?
    - Ja es können beide Programme kompiliert werden, da sich an der Variable ausser ihrem wirkungs bereich eigentlich nichts ändert.

2. Geben beide Programme beide das gleiche aus?
    - Ja sie geben das gleiche aus.

3. Welche Vor- und Nachteile haben die beiden Lösungen?
    - Zum Beispiel ermöglicht der Approach mit einer Globalen Variable eine wieder verwendung/zuweisung im Programm.
*/
