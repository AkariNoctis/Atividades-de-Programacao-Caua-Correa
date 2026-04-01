#include <stdio.h>
int main(void) {
    double celcius;
    double kelvin = 273.15;
    printf("digite a temperatura em celcius: ");
    scanf("%lf", &celcius);
    printf ("temperatura em celcius: %.2lf\n", celcius);
    return 0;

}