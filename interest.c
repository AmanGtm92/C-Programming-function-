#include <stdio.h>
#include <math.h>
//Calculate Compound Interest

double compoundInterest(double p, double r, int t) {
    return p * pow((1 + r / 100), t);
}

int main() {
    double principal, rate;
    int time;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %d", &principal, &rate, &time);

    printf("Compound Interest: %.2lf\n", compoundInterest(principal, rate, time));
    return 0;
}
