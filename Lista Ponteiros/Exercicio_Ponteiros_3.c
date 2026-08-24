// A) O erro no código ocorre pois o ponteiro está sem endereço definido corretamente.
// B)
#include <stdio.h>
int main()
{
    int valor = 50;
    int *p;
    p = &valor;         //exclusãp de "*" em "p" e acrescimo de "&" na variavel "valor".
    printf("%d\n", *p);
    return 0;
}