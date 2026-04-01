#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;
    
    printf("Digite os valores do ponto A: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite os valores do ponto B: ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrtf((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    printf("A distancia entre os pontos A e B é: %.2f\n", distancia);

    return 0;
}
