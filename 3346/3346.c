#include <stdio.h>
#include <math.h>

int main(){
    float f1, f2, pib = 0.0;


    scanf("%f %f", &f1, &f2);



    pib = (1 + (f1/100)) * (1 + (f2/100));
    pib = pib - 1;
    pib = pib * 100;
    pib = fabs(pib);

    printf("%.6f\n", pib);

    return 0;
}