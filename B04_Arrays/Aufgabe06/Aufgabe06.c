#include<stdio.h>
#include<stdlib.h>

int main() {
    char Text[100];

    printf("Text eingeben: ");
    fgets(Text, 100, stdin);

    char* pText = Text;
    while (*pText != '\0') pText++;

    printf("Die Laenge betraegt %i Zeichen\n", (pText - Text) - 1);

    return 0;
}