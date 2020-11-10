/*
*   Title: Gültigskeitsbereich von Variablen
*   Name: Simon Schaufelberger
*   Date: 10.11.20 
*/

// Imports
#include <stdio.h>
#include <stdlib.h>

double Umfang = 0.0;
int main() 
{
    // double Umfang = 0.0;

    Umfang = 11.45;
    printf("Umfang = %lf\n", Umfang);
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