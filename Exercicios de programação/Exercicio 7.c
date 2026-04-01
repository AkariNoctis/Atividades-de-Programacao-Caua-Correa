#include <stdio.h>
#define pi 3.14
    double area;
    int raio;
    int main() {
    
    printf ("digite o valor do raio: ");
    scanf ("%d", &raio);
    area = pi * raio * raio;
    printf ("area do circulo: %.2f", area);
    return 0;
}   

