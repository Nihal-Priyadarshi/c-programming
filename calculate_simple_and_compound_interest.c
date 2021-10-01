#include<stdio.h>

float power(float n1, float n2);

int main() {

    float p, r, t, si, ci, a;
    printf("Enter principal amount : ");
    scanf("%f",&p);
    printf("Enter annual rate of interest : ");
    scanf("%f",&r);
    printf("Enter time in number of years : ");
    scanf("%f",&t);

    si = p*r*t/100;
    a = p * power(1+r/100, t); // amount
    ci = a - p;
    printf("Simple interest = %.2f\n",si);
    printf("Compound interest = %.2f\n",ci);

    return 0;
}

float power(float base, float a) {
    if(a != 0) {
        return (base * power(base, a - 1));
    } else {
        return 1;
    }
}
