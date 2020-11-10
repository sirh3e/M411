#include<stdio.h>
#include<stdlib.h>

int main() 
{
    char Text[100];

    printf("Text eingeben: ");
    gets(Text);

    char* pText = Text;
    printf(Text);

    printf("\n"); 
    return 0;
}